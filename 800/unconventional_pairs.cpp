#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>

void solve() {
    int n;
    cin>>n;

    vector<int> num(n);

    for(int i=0; i<n; i++) {
        cin>>num[i];
    }

    sort(num.begin(),num.end());

    int i=0,j=1;
    int max_diff = INT_MIN;
    while(j<n) {
        int x = num[j]-num[i];
        if(x > max_diff) {
            max_diff = x;
        }
        i = i+2;
        j = j+2;
    }

    cout<<max_diff<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) {
        solve();
    }
}