#include<iostream>
using namespace std;
#include<string>
#include<vector>


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        vector<int> res(n,0);

        int great = n;
        int i = n-2;
        while(i >= 0) {
            if(s[i] == '>') {
                res[i+1] = great--;
            }
            i--;
        }

        for(int i=0; i<n; i++) {
            if(res[i] == 0) {
                res[i] = great--;
            }
        }

        for(int i=0; i<n; i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}