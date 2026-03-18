#include<iostream>
using namespace std;
#include<string>


int pass() {
    int n;
    cin>>n;

    string s;
    cin>>s;


    int p = 0;
    for(char ch: s) {
        if(ch == 'L') break;
        p++;
    }
    return p+1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<pass()<<endl;
    }
    return 0;
}