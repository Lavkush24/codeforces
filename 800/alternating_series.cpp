#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int *num = new int[n];

        int x = -1;
        for(int i=0; i<n-1; i++) {
            num[i] = x;
            if(x == -1) { x = 3;}
            else x = -1;
        }

        if(n%2 == 0) { num[n-1] = 2;}
        else num[n-1] = -1;

        for(int i=0; i<n; i++) {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}