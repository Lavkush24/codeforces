#include<iostream>
using namespace std;
#include<climits>


int good_array() {
    int n;
    cin>>n;

    int num[n];
    int good = 0,max = INT_MIN,min = INT_MAX, gcd = 1;

    for(int i=0; i<n; i++) {
        cin>>num[i];
        
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<good_array()<<endl;
    }
    return 0;
}