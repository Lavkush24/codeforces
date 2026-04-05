#include<iostream>
using namespace std;


void solve() {
    int x,y;
    cin>>x>>y;

    int fa = 0;
    int val = 1;
    if(x == 0 || y == 0) {
        if(y > 0) val = -1;
        for(int i=1; i<=(x+y); i++) {
            if((x+y)%i == 0) {
                fa++;
            }
        }

        cout<<fa<<endl;
        for(int i=0; i<(x+y); i++) {
            cout<<val<<" ";
        }
        cout<<endl;
        return ;
    }
    else if((x+y) % 2 == 1) {
        cout<<1<<endl;
    }
    else {
        cout<<2<<endl;
    }

    if(y > x) val = -1;
    for(int i=0; i<(x+y); i++) {
        cout<<val<<" ";
        val = -val;
    }

    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        solve();
    }
    return 0;
}