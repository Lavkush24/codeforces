#include<iostream>
using namespace std;


// int sum_arr(int *a,int *b,int l,int r,int n) {
    
//     int sum = 0;

//     for(int i=l-1; i<r; i++) {
//         int x; 

//         if(i == n-1) {
//             x = a[i] > b[i] ? a[i] : b[i];
//         }
//         else {
//             x = (a[i] > a[i+1]) ? (a[i] > b[i] ? a[i]: b[i]) : (a[i+1] > b[i] ? a[i+1] : b[i]);
//             x = x > b[i+1] ? x : b[i+1];
//         }
        
//         sum += x;
//     }

//     return sum;
// }

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,q;
        cin>>n>>q;

        int *a = new int[n];
        int *b = new int[n];

        for(int i=0; i<n; i++) { cin>>a[i];}
        for(int i=0; i<n; i++) { cin>>b[i];}

        // for(int i=0; i<n; i++) {
        //     if(b[i] > a[i]) { 
        //         a[i] = b[i];
        //     }
        // }

        // int i=0,j=i+1;
        // while(j < n) {
        //     if(a[j] > a[i]) {
        //         a[i] = a[j];
        //     }
        //     i++,j++;
        // }

        for(int i=n-1; i>=0; i--) {
            if(i == n-1) {
                a[i] = max(a[i],b[i]);
            }
            else {
                a[i] = max(max(a[i],a[i+1]),b[i]);
            }
        }

        b[0] = a[0];
        for(int i=1; i<n; i++) {
            b[i] = b[i-1]+a[i];
        }

        for(int i=0; i<q; i++) {
            int l,r;
            cin>>l>>r;
            int sum;
            if(l == 1) {
                sum = b[r-1];
            }
            else {
                sum = b[r-1]-b[l-2];
            }

            cout<<sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}