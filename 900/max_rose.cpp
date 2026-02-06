#include<iostream>
using namespace std;

int minimum_op() {
    int n,k;
    cin>>n>>k;

    int *num = new int[n];
    int *map = new int[k+1];

    for(int i=0;i<k+1; i++) {
        map[i] = 0;
    }

    for(int i=0; i<n; i++) { 
        cin>>num[i];
        
        if(num[i] <= k) {
            map[num[i]]++;
        }
    }
    
    int equal_k = map[k];
    int small_miss = 0;
    for(int i=0; i<k; i++) {
        if(map[i] == 0) {
            small_miss++;
        }
    }

    int x = small_miss - equal_k;
    return x < 0 ? equal_k : equal_k+x;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<minimum_op()<<endl;
    }
    return 0;
}