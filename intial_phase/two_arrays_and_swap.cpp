#include<iostream>
using namespace std;

void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int *arr,int size) {
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(arr[i] > arr[j]) {
                swap(arr[i],arr[j]);
            }
        }
    }
}

int maximum_sum_of_A(int *A,int *B,int size,int k) {
    for(int i=0; i<k; i++) {
        if(A[i] < B[size-i-1]) {
            swap(A[i],B[size-i-1]);
        }
    }

    // cout<<k<<endl;
    int sum = 0;
    for(int i=0; i<size; i++) {
        sum += A[i];
        // cout<<B[i]<<" ";
    }
    // cout<<endl;

    return sum;
}


int main() {
    int t,n,k;
    cin>>t;

    int *max_sum;
    max_sum = new int[t];

    for(int i=0; i<t; i++) {
        cin>>n>>k;
        int *A,*B;
        A = new int[n];
        B = new int[n];

        for(int j=0; j<n; j++) {
            cin>>A[j];
        }

        for(int j=0; j<n; j++) {
            cin>>B[j];
        }

        sort_array(A,n);
        sort_array(B,n);

        max_sum[i] = maximum_sum_of_A(A,B,n,k);
    }


    for(int i=0; i<t; i++) {
        cout<<max_sum[i]<<endl;
    }

    return 0;
}