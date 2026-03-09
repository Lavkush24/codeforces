#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> num(n);

        for(int i=0; i<n; i++) { cin>>num[i]; }

        sort(num.begin(),num.end());

        int i = n-1;
        while(num[i] == num[n-1]) {
            i--;
        }

        cout<<n-i-1<<endl;
    }
    return 0;
}