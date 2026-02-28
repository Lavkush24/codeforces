#include<iostream>
using namespace std;

#define from(i,n) for (int i=0; i<int(n); i++) 

int main() {
    int t;
    cin>>t;

    from(tt,t) {
        int n,x;
        cin>>x>>n;


        if(n%2 == 0) {
            cout<<0<<endl;
        }
        else {
            cout<<x<<endl;
        }
    }
    return 0;
}