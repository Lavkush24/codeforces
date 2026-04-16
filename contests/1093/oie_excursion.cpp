#include<iostream>
using namespace std;

void excursion() {
    int n,m;
    cin>>n>>m;

    int num[n];
    for(int i=0; i<n; i++) { cin>>num[i]; }

    int max_same = 0;
    for(int i=0; i<n-1; i++) {
        int j = i;
        while(j < n && num[j] == num[i]) { j++; }

        max_same = j-i;
        if(max_same >= m) {
            cout<<"No"<<endl;
            return ;
        }
        i = j-1;
    }

    cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        excursion();
    }
    return 0;
}