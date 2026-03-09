#include<iostream>
using namespace std;


void permute() {
    int n;
    cin>>n;

    int num[n];

    int max_ind = -1;
    for(int i=1; i<=n; i++) {
        cin>>num[i];
        if(num[i] == n) {
            max_ind = i;
        }
    }

    swap(num[1],num[max_ind]);

    for(int i=1; i<=n; i++) {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        permute();
    }
    return 0;
}