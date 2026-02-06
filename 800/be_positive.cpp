#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int map[2] = {0,0};

        for(int i=0; i<n; i++) {
            int x;
            cin>>x;
            if(x == -1) {
                map[0]++;
            }
            else if(x == 0) {
                map[1]++;
            }
        }

        int res = 0;
        if(map[0]%2 == 0) {
            res = map[1];
        }
        else{
            res = map[1] + 2;
        }

        cout<<res<<endl;
    }
    return 0;
}