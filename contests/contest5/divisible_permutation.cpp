#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int *res = new int[n];
        int *map = new int[n+1];

        for(int i=0; i<=n; i++) {
            map[i] = 0;
        }

        int sum = 0;
        res[n-1] = 1;
        sum += 1;
        for(int i=n-2; i>0; i--) {
            int x = res[i+1]+(i+1);
            res[i] = x > n || map[x]==1 ? res[i+1]-(i+1) : x;
            map[res[i]] = 1;
            sum += res[i]; 
        }

        res[0] = n*(n+1)/2 - sum;


        for(int i=0; i<n; i++) {
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}