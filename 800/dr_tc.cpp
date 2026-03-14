#include<iostream>
using namespace std;
#include<string>


int ones() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int one = 0;
    for(char ch: s) { if(ch == '1') one++; }

    return one*(one-1) + (n-one)*(one+1);
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<ones()<<endl;
    }
    return 0;
}