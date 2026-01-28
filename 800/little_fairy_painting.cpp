#include<iostream>
using namespace std;
#include<climits>

int next_smallest(int *arr,int n,int distinct) {
    int small = INT_MAX;
    for(int i=0; i<n ; i++) {
        if(arr[i] < small && arr[i] >= distinct) {
            small = arr[i];
        }
    }
    return small;
}

int distinct(int *arr,int n) {
    int *dist = new int[1000];

    for(int i=0; i<1000; i++) {
        dist[i] = 0;
    }

    int dist_count= 0;
    for(int i=0; i<n; i++) {
        if(dist[arr[i]] >= 1) {
            dist[arr[i]] += 1;
        }
        else {
            dist[arr[i]] = 1;
            dist_count++;
        }
    }
    return dist_count;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int *color = new int[n];
        for(int i=0; i<n; i++) { cin>>color[i]; }

        int d = distinct(color,n);
        int res = next_smallest(color,n,d);
        cout<<res<<endl;

    }
    return 0;
}