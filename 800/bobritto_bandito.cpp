#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m,l,r;
        cin>>n>>m>>l>>r;

        int l_,r_;
        l_ = r_ = 0;
        if(m < r) {
            r_ = m;
        }
        else {
            m = m - r;
            r_ = r;
            l_ = 0 - m;
        }

        cout<<l_<<" "<<r_<<endl;
    }
    return 0;
}