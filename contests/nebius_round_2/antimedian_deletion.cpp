#include<iostream>
using namespace std;



// not a valid solution ???????????????
int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int num[n];
        for(int i=0; i<n; i++) {
            cin>>num[i];
        }

        if(n < 3) {
            for(int i=0;i<n; i++) {
                cout<<"1 ";
            }
        }
        else {
            for(int i=0;i<n; i++) {
                cout<<"2 ";
            }
        }

        cout<<endl;
    }
    return 0;
}