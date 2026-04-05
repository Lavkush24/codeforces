
/*
frist try:  start with l=0 and prefice = sum(num[i]) i is 0 to l and middle is num[l+1] and rest is suffix now check that these three mod with 3 is different if yes break and print the l=l and r = l+2
*/


#include<iostream>
using namespace std;

void cut() {
    int n;
    cin>>n;

    int num[n];
    int total = 0;
    for(int i=0; i<n; i++) { cin>>num[i]; total += num[i]; }

    int prefix = 0;
    int suffix = 0;
    int middle = 0;

    for(int i=0; i<n-2; i++) {
        prefix += num[i];
        middle = num[i+1];
        suffix = total - (prefix+middle);

        int p = prefix%3;
        int m = middle%3;
        int s = suffix%3;

        if((p==m && m==s) || (p!=m && m!=s && s!=p)) {
            cout<<i+1<<" "<<i+2<<endl;
            return;
        }
    }

    cout<<0<<" "<<0<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cut();
    }
    return 0;
}


