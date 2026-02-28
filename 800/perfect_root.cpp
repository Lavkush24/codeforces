#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        while(n > 0) {
            cout<<n--<<" ";
        }
        cout<<endl;
    }
    return 0;
}