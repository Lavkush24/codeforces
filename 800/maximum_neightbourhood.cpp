#include<iostream>
using namespace std;

void bound(int &r,int n,int m) {
    if(r <= n || r > m) { r = 0;}
}

int weight(int r,int n,int b) {
    int sum = 0;

    int upper = r - n;
    bound(upper,0,n*n);
    int lower = r + n;
    bound(lower,0,n*n);
    int left = r - 1;
    bound(left ,b,b+n);
    int right = r+1;
    bound(right,b,b+n);

    return r+upper+lower+left+right;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int max = 0;

        int bound = 0;
        for(int i=1; i<=n*n; i++) {
            int value = weight(i,n,bound);
            if(i % n == 0) {
                bound += n;
            }
            if(max < value) {
                max = value;
            }
            // cout<<value<<endl;
        }
        cout<<max<<endl;
    }
    return 0;
}