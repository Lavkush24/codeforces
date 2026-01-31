#include<iostream>
using namespace std;
#include<string>

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        char c = s[n-1];
        int count = 0;
        for(char ch: s) {
            if(c == ch) { count++; }
        }

        cout<<(n-count)<<endl;
    }
    return 0;
}