#include<iostream>
using namespace std;


int matches(int n) {
    int m = 0;
    while(n > 1) {
        int remain = n%2;
        m += n/2;
        n = n/2 + remain;
    }
    return m;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int total_match = matches(n);
        int losers = total_match;

        total_match += matches(losers) + 1;
        
        cout<<total_match<<endl;
    }
    return 0;
}