/*
first try: iterate over array again and again until find that the first operation is not valid and perform both operation and count the no of operation 
*/

#include<iostream>
using namespace std;

int operation() {
    int n;
    cin>>n;

    int a[n]; int b[n];

    for(int i=0;i<n; i++) { cin>>a[i]; }
    for(int i=0; i<n; i++) { cin>>b[i]; }

    int op = 0;
    while(1) {
        int first = 0;
        for(int i=0; i<n; i++) {
            if(a[i] > b[i]) { a[i]--; first++; }
            if(a[i] < b[i]) { a[i]++; }
        }
        
        if(first == 0) {
            break;
        }
        op++;
    }

    return op;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<operation()<<endl;
    }
    return 0;
}