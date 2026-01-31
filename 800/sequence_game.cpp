#include<iostream>
using namespace std;
#include<algorithm>


int find_number(int *arr,int n) {
    int i=0,j=1;

    while(j < n) {
        if(abs(arr[j]-arr[i]) > 1) {
            int larger = arr[j] > arr[i] ? arr[j] : arr[i];
            int smaller = (arr[j]+arr[i]-larger);

        }

    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        int *nums = new int[n];
        for(int i=0; i<n; i++) { cin>>nums[i]; }
        int x;
        cin>>x;

        int num = find_number(nums,n);
    }
}