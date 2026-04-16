#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int num[n];
        int zero = 0;
        for(int i=0; i<n; i++) {
            cin>>num[i];
            if(num[i] == 0) { zero++; }
        }

        if(zero == n) {
            cout<<0<<endl;
            continue;
        }
        else if(zero == 0) {
            cout<<1<<endl;
            continue;
        }
        
        int left = 0,right = n-1;
        while(num[left] == 0) { left++; }
        while(num[right] == 0) { right--; }

        int res = 1;
        for(int i=left ; i<=right; i++) {
            if(num[i] == 0) {
                res = 2;
                break;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}