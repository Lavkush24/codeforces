#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> sword(n+1);
        vector<int> monster(n+1);

        for(int i=1; i<=n; i++) { cin>>sword[i]; }
        for(int i=1; i<=n; i++) { cin>>monster[i]; }


        sort(sword.begin(),sword.end(),greater<int>());
        int max_score = 0;

        for(int i=1; i<=n ; i++) {
            
        }

    }
}