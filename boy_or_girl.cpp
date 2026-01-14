#include<iostream>
using namespace std;
#include<string>

bool boy(string &s) {
    int *c;
    c = new int[26];

    for(int i=0; i<26; i++) {
        c[i] = 0;
    }

    for(char &ch : s) {
        int j = ch - 'a';
        c[j]++;
    }

    int oddone = 0;
    for(int i=0; i<26; i++) {
        if(c[i] > 0) {
            oddone++;
        }
    }

    return (oddone%2) == 1;
}


int main() {
    string s;
    cin>>s;

    if(boy(s)) {
        cout<<"IGNORE HIM!"<<endl;
    }
    else {
        cout<<"CHAT WITH HER!"<<endl;
    }
    
    return 0;
}