#include<iostream>
using namespace std;


void avoid_maximum() {
    int n;
    cin>>n;
    int *num = new int[n];
    for(int i=0; i<n; i++) { cin>>num[i]; }

    int op = 0;

    for(int i=1; i<n-1; i++) {
        if(num[i] > num[i+1] && num[i] > num[i-1]) {
            op++;
            if(i == n-2) {
                num[i+1] = num[i];
            }
            else {
                num[i+1] = num[i] > num[i+2] ? num[i] : num[i+2];
            }
        }
    }

    cout<<op<<endl;
    
    for(int i=0; i<n; i++) {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        avoid_maximum();
    }
}