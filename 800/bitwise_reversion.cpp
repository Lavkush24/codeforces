#include<iostream>
using namespace std;
#include<cmath>

string reversion() {
    int a,b,c;
    cin>>a>>b>>c;

    int max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;

    int mask = 1;

    int i=0;
    while(pow(2,i) <= max) {
        int one = 0;
        if((a&mask) > 0) { one++; }
        if((b&mask) > 0) { one++; }
        if((c&mask) > 0) { one++; }

        // cout<<(a&mask)<<" "<<(b&mask)<<" "<<(c&mask)<<endl;
        // cout<<one<<endl;

        if(one == 2) {
            return "No";
        }

        mask = mask<<1;
        i++;
    }

    return "Yes";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<reversion()<<endl;
    }

    // int a = 5;
    // int mask = 00000001;
    // mask = mask<<7;
    // cout<<(a&mask)<<endl;

    return 0;
}