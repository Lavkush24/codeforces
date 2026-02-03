#include<iostream>
using namespace std;


int maximum_operation() {
    int n;
    cin>>n;
    
    int even = 0;
    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        if(x%2 == 0) {
            even++;
        }
    }
    
    if(even == 0) { return n-1; }
    if(even == n) { return 1; }

    return n-even+1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<maximum_operation()<<endl;
    }
    return 0;
}