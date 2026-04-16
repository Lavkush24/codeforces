#include<iostream>
using namespace std;


int cost() {
    int a,b,k;
    cin>>a>>b>>k;

    if(k >= a && k >= b) {
        return 1;
    }

    for(int i=2; i<=k; i++) {
        int x,y;
        if(a%i == 0) {
            x = a/i;
            if(b%x == 0) { y = b/x; }

            if(a/i  == b/y) {
                return 1;
            }
        }

    }

    return 2;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<cost()<<endl;
    }
    return 0;
}