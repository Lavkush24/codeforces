#include<iostream>
using namespace std;
#include<string>


bool identical(string s,string t,int n) {
    for(int i=0; i<n; i++) {
        if(s[i]=='R' || t[i] == 'R') {
            if(s[i] != t[i]) {
                return false;
            }
        }
    }
    return true;
}


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;

        if(identical(s,t,n)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}