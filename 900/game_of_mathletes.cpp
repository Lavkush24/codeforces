#include<iostream>
using namespace std;
#include<map>

void solve() {
    int n,k;
    cin>>n>>k;

    int *num = new int[n];
    int max = 0;
    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(num[i] > max) {
            max = num[i];
        }
    }

    int score = 0 ;
    int *map = new int[max+1];
 
    for(int i=0; i<max+1; i++) {
        map[i] = 0;
    }

    for(int i=0; i<n; i++) {
        map[num[i]]++;
    }


    for(int i=0; i<=max/2; i++) {
        int cmax = 0;

    }

    cout<<score<<endl;
}

int main() {
    int t; cin>>t;
    while(t--) {
        solve();
    }
    return 0;
}