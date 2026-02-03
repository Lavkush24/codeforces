#include<iostream>
using namespace std;
#include<string>


int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;

        int n = s.length();
        if(s[n-1] == 'o') {
            cout<<"FILIPINO"<<endl;
        }
        else if(s[n-1] == 'u') {
            cout<<"JAPANESE"<<endl;
        }
        else {
            cout<<"KOREAN"<<endl;
        }
    }

    return 0;
}