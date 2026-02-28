#include<iostream>
using namespace std;
#include<string>

string safe() {
    int n,j,k;
    cin>>n>>j>>k;

    int num[n+1];
    int max = -1;
    for(int i=1; i<=n; i++) { 
        cin>>num[i];
        if(i != j && max < num[i]) {
            max = num[i];
        }
    }

    swap(num[n],num[j]);
    int matches = n-k;

    for(int i=1; i<n; i++) { 
        if(num[i] < max) {
            matches--;
        }
    }

    if(matches > 0 && max > num[n]) {
        return "No";
    }
    
    return "Yes";
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<safe()<<endl;
    }
    return 0;
}