#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,x;
        cin>>n>>x;

        int *nums = new int[n];
        int max = -1;

        for(int i=0; i<n; i++) {
            cin>>nums[i];
            if(nums[i] > max) {
                max = nums[i];
            }
        }

        int *map = new int[max+1];
        for(int i=0; i<=max; i++) { map[i] = 0; }

        for(int i=0; i<n; i++) {
            map[nums[i]]++;
        }
        
        int operation = 0;
        if(x <= max) {
            operation = map[x];
        }
        for(int i=0; i<x; i++) {
            if(map[i] > 1) {
                operation--;
            }
        }

        int res = abs(operation) ;
        cout<<res<<endl;
    }
    return 0;
}