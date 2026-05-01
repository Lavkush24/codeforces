#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    while(t--) {
        int x,y;
        cin>>x>>y;

        if(x%2 == 1 && y%2 == 1) {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}