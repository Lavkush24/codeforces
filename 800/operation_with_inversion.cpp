#include<iostream>
using namespace std;


// void shift(int *arr,int j,int n) {
//     for(int i=j; i<n-1; i++) {
//         arr[i] = arr[i+1];
//     }
// }

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int *arr = new int[n];

        for(int i=0; i<n; i++) {
            cin>>arr[i];
        }

        int operation = 0;
        // int i =0;
        // while(i<n) {
        //     int j = i+1;
        //     while(j < n) {
        //         if(arr[i] > arr[j]) {
        //             shift(arr,j,n);
        //             n--;
        //             operation++;
        //             break;
        //         }
        //         j++;
        //     }
        //     if(j >= n) {
        //         i++;
        //     }
        // }

        int m = arr[0];
        for(int i=1; i<n; i++) {
            if(m > arr[i]) {
                operation++;
            }
            else {
                m = arr[i];
            }
        }

        cout<<operation<<endl;
    }

    return 0;
}