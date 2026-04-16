#include<iostream>
using namespace std;
#include<vector>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> map(201,0);
        for(int i=0; i<n; i++) { 
            int x; cin>>x;
            map[x]++;
        }

        bool duplicate = false;
        for(int i=0; i<201; i++) {
            if(map[i] > 1) {
                duplicate = true;
                break;
            }
        }

        if(!duplicate) {
            for(int i=200;i>=0; i--) {
                if(map[i] > 0) {
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
    return 0;
}