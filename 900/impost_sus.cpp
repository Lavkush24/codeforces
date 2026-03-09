#include<iostream>
using namespace std;
#include<string>

int minimum_op() {
    string s;
    cin>>s;

    int n = s.length();
    // int u = 0;
    // for(char c : s) { if(c == 'u') { u++; }}
    // if((u == 0 || u == 1) && n > 3) {
    //     return u;
    // }


    int u = 0;
    if(s[0] == 'u') { u++; }
    if(s[n-1] == 'u') { u++; }

    int i=1,j=2;
    while(j < n-1) {
        if(s[i] == 'u' && s[j] == 'u') {
            u++;
        }
        i = j+1;
        j = i+1;
    }

    return u;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<minimum_op()<<endl;
    }
    return 0;
}