#include<iostream>
using namespace std;


void fill_array(int *num,int n,int k) {
    int i=k-1;

    int v = 1;
    while(i < n) {
        num[i] = v++;
        i = i+k;
    }

    for(int i=0; i<n; i++) {
        if(num[i] == 0) {
            num[i] = v++;
        }
    }
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        int *num = new int[n];

        for(int i=0; i<n; i++) { num[i] = 0;}

        fill_array(num,n,k);

        for(int i=0; i<n; i++) {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}