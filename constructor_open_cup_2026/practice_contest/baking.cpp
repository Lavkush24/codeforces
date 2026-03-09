#include<iostream>
using namespace std;
#include<vector>

int main() {
    // int t;
    // cin>>t;
    // while(t--) {
        int a,b,c;
        cin>>a>>b>>c;

        int res = 0;
        if((abs(a-b) <= abs(a-c))) {
            res += (abs(a-b)+abs(b-c));
        }
        else {
            res += (abs(a-c)+abs(c-b));
        }

        cout<<res<<endl;
    // }
    return 0;
}