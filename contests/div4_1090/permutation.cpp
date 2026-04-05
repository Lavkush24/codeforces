#include<iostream>
using namespace std;



int main() {
    int t;cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int size = 3*n;
        int num[3*n+1];

        for(int i=1; i<=size; i++) { num[i] = 0; }

        int j=1;
        int val = 1;
        while(j <= size) {
            num[j] = val++;
            j = 3*val - 2;
        }

        for(int i=1; i<=size; i++) {
            if(num[i] == 0) {
                num[i] = val++;
            }
        }


        for(int i=1; i<=size; i++) {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}