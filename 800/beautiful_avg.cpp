#include<iostream>
using namespace std;


int beauty_avg() {
    int n;
    cin>>n;
    int *num = new int[n];

    for(int i=0;i<n; i++) {
        cin>>num[i];
    }

    int l=0,r=0;
    int max_avg = -1;
    int sum = 0;

    while(l < n) {
        if(r >= n) {
            sum -= num[l];
        }
        else {
            sum += num[r];
        }

        int avg = sum / (r-l+1);
        if(max_avg < avg) {
            max_avg = avg;
        }

        if(r < n) {
            r++;
        }
        else {
            l++;
        }
    }

    return max_avg;
}

int main() {
    int t;cin>>t;
    while(t--) {
        cout<<beauty_avg()<<endl;
    }
    return 0;
}