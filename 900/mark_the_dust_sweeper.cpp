#include<iostream>
using namespace std;


long long minimum_op() {
    int n;
    cin>>n;

    int num[n];
    int first = 0; 
    for(int i=0; i<n; i++) { cin>>num[i]; }

    long long op = 0;
    int i = 0;
    while(num[i] == 0) { i++; }
    while(i < n-1) { 
        if(num[i] == 0) { op += 1; }
        else {
            op += num[i];
        }

        i++;
    }

    return op;
}

int main() {
    int t; cin>>t;

    while(t--) {
        cout<<minimum_op()<<endl;
    }
    return 0;
}