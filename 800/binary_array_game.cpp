#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;cin>>n;
        int num[n];

        for(int i=0; i<n; i++) {
            cin>>num[i];
        }

        if(num[0] == 1 || num[n-1] == 1) {
            cout<<"Alice"<<endl;
        }
        else {
            cout<<"Bob"<<endl;
        }
    }
    return 0;
}