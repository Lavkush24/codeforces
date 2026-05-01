#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int num[2*n];

        int val = n;
        int i = 0;
        while(i<n) {
            num[i] = val--;
            i++;
        }

        num[i++] = n;
        val = 1;
        while(i < (2*n)) {
            num[i++] = val++;
        }


        for(int i=0; i<2*n; i++) {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}