#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m,d;
        cin>>n>>m>>d;

        int max_box_hold = d/m;
        int mini_tower = max_box_hold + 1;

        int res = 0;

        if(n%mini_tower == 0) {
            res = n/mini_tower;
        }
        else {
            res = n/mini_tower + 1;
        }

        cout<<res<<endl;
    }
    return 0;
}