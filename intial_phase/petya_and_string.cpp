#include<iostream>
using namespace std;
#include<string>


void to_lowercase(string& s) {
    for(char& ch: s) {
        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
    }
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    to_lowercase(s1);
    to_lowercase(s2);

    int i=0;
    for(i=0; i<s1.length(); i++) {
        if(s1[i] > s2[i]) {
            cout<<"1"<<endl;
            break;
        }
        else if(s1[i] < s2[i]) {
            cout<<"-1"<<endl;
            break;
        }
    }

    if(i == s2.length()) {
        cout<<"0"<<endl;
    }

    return 0;
}