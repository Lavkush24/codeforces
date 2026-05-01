#include<iostream>
using namespace std;
#include<string>

int main() {
    int t;
    cin>>t; 

    while(t--) {
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        int one=0,zero=0,two=0;
        
        for(char ch: s) {
            if(ch == '0') { zero++; }
            if(ch == '1') { one++; }
            if(ch == '2') { two++; }
        }

        if(two > 1) { two = two*2 - 1; }

        
    }
}