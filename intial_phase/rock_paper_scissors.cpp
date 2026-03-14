#include<iostream>
using namespace std;
#include<string>


bool winCondition(string p,string h1,string h2) {
    if(p == "rock") {
        if(h1 == "scissors" && h2 == "scissors") {
            return true;
        }
    }
    else if(p == "paper") {
        if(h1 == "rock" && h2 == "rock") {
            return true;
        }
    }
    else {
        if(h1 == "paper" && h2 == "paper") {
            return true;
        }
    }

    return false;
}

 

int main() {
    string *hand;
    hand = new string[3];

    for(int i=0; i<3; i++) {
        cin>>hand[i];
    }

    int res = 0;

    for(int i=0; i<3; i++) {
        if(winCondition(hand[i],hand[(i+1) % 3],hand[(i+2) %3])) {
            res = i+1;
            break;
        }
    }

    if(res == 1) {
        cout<<"F"<<endl;
    }
    else if(res == 2) {
        cout<<"M"<<endl;
    }
    else if(res == 3) {
        cout<<"S"<<endl;
    }
    else {
        cout<<"?"<<endl;
    }

    return 0;
}
