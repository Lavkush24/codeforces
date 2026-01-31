#include<iostream>
using namespace std;

// TIME LIMIT EXCEEDED

void rewrite_array(int *a,int **r,int i,int n) {
    for(int j=0; j<n; j++) {
        a[j] = r[i][j];
    }
}


int main() {
    int t;
    cin>>t;

    int **res;
    res = new int*[t];

    for(int i=0; i<t; i++) {
        int n,m,h;
        cin>>n>>m>>h;

        res[i] = new int[n];
        int *arr = new int[n];

        for(int j=0; j<n; j++) {
            cin>>res[i][j];
            arr[j] = res[i][j]; 
        }

        for(int j=0; j<m; j++) {
            int bi,ci;
            cin>>bi>>ci;

            if((arr[bi-1]+ci) > h) {
                rewrite_array(arr,res,i,n);
            }
            else {
                arr[bi-1] += ci;
            }
        }

        for(int j=0;j<n;j++) {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}