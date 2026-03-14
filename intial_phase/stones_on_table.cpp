#include<iostream>
using namespace std;
#include<string>


int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int repeat = 0;
    for(int i=0; i<n-1; i++) {
        if(s[i] == s[i+1]) {
            repeat++;
        }
    }

    cout<<repeat<<endl;
    return 0;
}