#include<iostream>
using namespace std;
#include<cmath>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n; 

        int valid_config = 0;

        if(n%2 == 0) {
            // int i = 0;
            // while(i <= n) {
            //     valid_config++;
            //     i = i+4;
            // }
            valid_config = floor(n/4) + 1;
        }

        cout<<valid_config<<endl;
    }
    return 0;
}