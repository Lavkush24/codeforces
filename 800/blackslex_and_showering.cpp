#include<iostream>
using namespace std;


int minimum_sum() {
    int n;
    cin>>n;

    int num[n];
    cin>>num[0];
    int diff = 0;

    for(int i=1; i<n; i++) {
        cin>>num[i];
        diff += abs(num[i]-num[i-1]);
    }

    int min_sum = diff - abs(num[1]-num[0]);

    int x = 0;
    for(int i=1; i<n-1; i++) {
        x = diff-abs(num[i]-num[i-1])-abs(num[i]-num[i+1])+abs(num[i-1]-num[i+1]);
        if(x < min_sum) {
            min_sum = x;
        }
    }

    x = diff - abs(num[n-1]-num[n-2]);

    if(x < min_sum) { min_sum = x; }

    return min_sum;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<minimum_sum()<<endl;
    }
    return 0;
}