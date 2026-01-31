#include<iostream>
using namespace std;

// time limit exceeded 
int MEX(int *arr,int start,int end) {
    if(start == end) {
        if(arr[start] > -1){
            return arr[start]-1;
        }
        else {
            return arr[start]+1;
        }
    }

    int res = 0;
    int max = arr[start];
    for(int i=start+1; i<=end; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }

    int *hash;
    hash = new int[max+1];

    for(int i=0; i<=max; i++) {
        hash[i] = 0;
    }

    for(int i=start; i<=end; i++) {
        hash[arr[i]]++;
    }

    for(int i=0; i<=max; i++) {
        if(hash[i] == 0) {
            res = i;
            break;
        }
    }

    return res;
}


bool MEX_2(int *arr,int ind) {
    
}

int main() {
    int t;
    cin>>t;

    char *res;
    res = new char[t];

    for(int i=0;i<t; i++) {
        int n;
        cin>>n;
        int *arr;
        arr = new int[n];   

        for(int j=0; j<n;j++) {
            cin>>arr[j];
        }

        for(int j=0; j<n; j++) {
            if(MEX(arr,0,j) == MEX(arr,j+1,n-1)) {
                res[i] = 'Y';
                break;
            }
        }

        if(res[i] != 'Y') {
            res[i] = 'N';
        }

    }

    for(int i=0; i<t; i++) {
        if(res[i] == 'Y') {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}