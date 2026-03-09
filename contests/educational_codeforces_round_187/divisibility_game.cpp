#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;

        
        int a[n],b[m];
        
        for(int i=0; i<n; i++) { cin>>a[i]; }
        for(int i=0; i<m; i++) { cin>>b[i]; }
        
        if((n==1 && a[0]==1) || m==1) {
            cout<<"Alice"<<endl;
            continue;
        }

        int div = 0,non_div = 0;
        for(int i=0; i<m; i++) {
            for(int j=0;j<n; j++) {
                if(b[i]%a[j] == 0) {
                    div++;
                    break;
                }
            }
        }


        // cout<<div<<" "<<non_div<<endl;

        if(m%2 == 0) {
            if(div == m/2) {
                cout<<"Alice"<<endl;
            }
            else {
                cout<<"Bob"<<endl;
            }
        }
        else {
            if(div == ((m/2) + 1)) {
                cout<<"Alice"<<endl;
            }
            else {
                cout<<"Bob"<<endl;
            }
        }
    }

    return 0;
}