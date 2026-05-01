#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int pos[n+1];
        int start = 0,end = 0;
        
        for(int i=1; i<=n; i++) {
            cin>>pos[i];
            
            if(pos[i] != i && start == 0) {
                start = i;
            }
            else if(pos[i] != i) {
                end = i;
            }
        }

        if(start == 0 || end == 0) {
            cout<<0<<endl;
        }
        else {
            cout<<end-start+1<<endl;
        }
    }
    return 0;
}