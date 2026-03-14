#include<iostream>
using namespace std;
#include<vector>

int distinct() {
    int n;
    cin>>n;

    vector<int> map(n+1,0);
    for(int i=0; i<n; i++) { 
        int x; cin>>x;
        map[x]++;
    }

    int res = 0;
    for(int i=0; i<n+1; i++) {
        if(map[i] > 0) {
            res++;
        }
    }

    return res;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<distinct()<<endl;
    }
    return 0;
}