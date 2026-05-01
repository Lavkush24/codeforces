#include<iostream>
using namespace std;


void fall() {
    int n;
    cin>>n;

    int num[n];
    for(int i=0;i<n; i++) { cin>>num[i]; }

    int i=0,j=n-1;
    int k=0;
    while(k <= j) {
        if(num[k]%3 == 0 && num[k]%2 == 0) {
            swap(num[i],num[k]);
            i++,k++;
        }
        else if(num[k]%3 == 0) {
            swap(num[j],num[k]);
            j--;
        }
        else {
            k++;
        }
    }

    k = i;
    while(k <= j) {
        if(num[k]%2 == 0) {
            swap(num[i],num[k]);
            i++;
        }
        k++;
    }

    for(int i=0; i<n; i++) {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}


int main() {
    int t;
    cin>>t;
    while(t--) {
        fall();
    }
    return 0;
}