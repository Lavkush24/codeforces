#include<iostream>
using namespace std;
#include<stack>
#include<algorithm>
#include<string>


int minimum_no_op() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    stack<char> round;
    stack<char> square;
    for(char ch: s) {
        if(ch == '(' || ch == ')') {
            if(round.empty()) {
                round.push(ch);
            }
            else {
                char top = round.top();
                if(top == '(' && ch == ')') {
                    round.pop();
                }
                else {
                    round.push(ch);
                }
            }
        }
        else {
            if(square.empty()) {
                square.push(ch);
            }
            else {
                char top = square.top();
                if(top == '[' && ch == ']') {
                    square.pop();
                }
                else {
                    square.push(ch);
                }
            }
        }
    }

    if(round.empty() && square.empty()) {
        return 0;
    }


    int pair = 0;
    if(round.size() == square.size()) {
        return round.size();
    }
    else {
        while(!round.empty()) {
            char c = round.top(); round.pop();
            if(c == round.top()) {
                pair++;
            }
            else {
                pair = 2;
            }
            round.pop();
        }

        while(!square.empty()) {
            char c = square.top(); square.pop();
            if(c == square.top()) {
                pair++;
            }
            else {
                pair = 2;
            }
            square.pop();
        }
    }
    return pair;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<minimum_no_op()<<endl;
    }
    return 0;
}