#include<iostream>
using namespace std;


void yes() {
    string s;
    cin>>s;

    int y = 0;
    for(char ch: s) {
        if(ch == 'Y') {
            y++;
        }
    }

    if(y < 2) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        yes();
    }
    return 0;
}