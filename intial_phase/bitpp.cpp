#include<iostream>
using namespace std;
#include<string>

int main() {
    int no_of_statements;
    cin>>no_of_statements;

    int X = 0;
    for(int i=0; i<no_of_statements; i++) {
        string s;
        cin>>s;
        if(s[0] == '+' || s[s.length()-1] == '+') {
            X++;
        }
        else {
            X--;
        }
    }
    cout<<X<<endl;
    return 0;
}