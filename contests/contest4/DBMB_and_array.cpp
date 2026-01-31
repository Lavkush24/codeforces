#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n,s,x;
        cin>>n>>s>>x;

        int sum = 0;

        for(int j=0; j<n; j++) {
            int k;
            cin>>k;
            sum += k;
        }

        int diff = s-sum;
        if(diff < 0) {
            cout<<"NO"<<endl;
        }
        else if(diff % x == 0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}