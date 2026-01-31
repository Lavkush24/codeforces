#include<iostream>
using namespace std;


int sorted_k(int *arr,int n)  {
    int k = 0;
    for(int i=0; i<n; i++) {
        int min = i;
        for(int j=i+1; j<n; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }
        swap(arr[i],arr[min]);
        if(k < abs(arr[i]-arr[min])) {
            k = abs(arr[i]-arr[min]);
        }
    }

    return k;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int *nums = new int[n];
        for(int i=0;i<n; i++) { cin>>nums[i]; }

        int k = sorted_k(nums,n);

        if(k == 0) {
            cout<<-1<<endl;
        }
        else {
            cout<<k<<endl;
        }
    }
    return 0;
}