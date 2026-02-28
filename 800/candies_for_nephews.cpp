#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        

        int res = 0;
        if(x%3 != 0) {
            res = ((x/3)+1)*3 - x;
        }
        cout<<res<<endl;
    }
    return 0;
}