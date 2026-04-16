#include<iostream>
using namespace std;



// time limit exceeded on this way try again ????

int main() {
    int n,m;
    cin>>n>>m;

    int num[n];
    for(int i=0; i<n; i++) { cin>>num[i]; }

    int forward[n+1];
    int backward[n+1];

    for(int i=1; i<n; i++) {
        if(num[i] < num[i-1]) { forward[i+1] = num[i-1]-num[i]; }
        else { forward[i+1] = 0; }
    }

    for(int i=n-2; i>=0; i--) {
        if(num[i] < num[i+1]) { backward[i+1] = num[i+1]-num[i]; }
        else { backward[i+1] = 0; }
    }

    while(m--) {
        int a,b;
        cin>>a>>b;  

        long long min_amount = 0;
        if(a < b) {
            for(int i=a+1; i<=b; i++) {
                min_amount += forward[i];
            }
        }
        else {
            for(int i=a-1; i>=b; i--) {
                min_amount += backward[i];
            }
        }

        cout<<min_amount<<endl;
    }

    return 0;
}