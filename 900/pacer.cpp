#include<iostream>
using namespace std;


int main() {
    int t; 
    cin>>t;
    while(t--) {
        int n,m;
        cin>>n>>m;

        int flag = 0;
        for(int i=0; i<n; i++) {
            int a,b;
            cin>>a>>b;

            if((flag == 0)) {
                if(a%2 != b) {
                    m--;
                    flag = 1;
                }
            }
            else if(flag == 1) {
                if(a%2 == b) {
                    m--;
                    flag = 0;
                }
            }
        }

        cout<<m<<endl;
    }
    return 0;
}