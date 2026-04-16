#include<iostream>
using namespace std;


int result() {
    int n,k;
    cin>>n>>k;

    int map[n];
    for(int i=0; i<n; i++) { map[i] = 0; }

    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        map[i-1] = abs(x-i);
    }

    int diff = 0;
    for(int i=0; i<n; i++) {
        if(map[i]%k != 0) {
            diff++;
        }
    }

    if(diff > 2) {
        return -1;
    }
    else if(diff == 2) {
        return 1;
    }
    
    return 0;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<result()<<endl;
    }
}