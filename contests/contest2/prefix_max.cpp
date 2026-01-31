#include<iostream>
using namespace std;
#include<climits>




int max_of_array(int *arr,int size) {
    int max = arr[0];
    for(int i=1; i<size; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}  


int main() {
    int t;
    cin>>t;

    int *res = new int[t];

    for(int i=0;i<t; i++) {
        int n;
        cin>>n;
        int *arr = new int[n];

        for(int j=0; j<n; j++) {
            cin>>arr[j];
        }

        res[i] = max_of_array(arr,n)*n;
    }

    for(int i=0; i<t; i++) {
        cout<<res[i]<<endl;
    }
    return 0;
}