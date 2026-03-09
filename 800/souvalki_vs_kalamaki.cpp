#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void check_win() {
    int n;
    cin>>n;
    vector<int> num(n+1);

    for(int i=1; i<=n; i++) { cin>>num[i]; }
    sort(num.begin(),num.end());

    int m;
    if(n%2 == 0) {
        m = n-1;
    }
    else {
        m = n;
    }

    for(int i=2; i<=m; i = i+2) {
        if(num[i] != num[i+1]) {
            cout<<"No"<<endl;
            return ;
        }
    }

    cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        check_win();
    }
    return 0;
}