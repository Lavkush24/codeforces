#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,y,r;
        cin>>n>>y>>r;

        int max_ply = r + y/2;

        if(max_ply > n) {
            max_ply = n;
        }

        cout<<max_ply<<endl;
    }
    return 0;
}