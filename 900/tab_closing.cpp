#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int a,b,n;
        cin>>a>>b>>n;

        long long mul = (long long)n * b;

        if(mul <= a || b >= a) {
            cout<<1<<endl;
        }
        else {
            cout<<2<<endl;
        }
    }
    return 0;
}