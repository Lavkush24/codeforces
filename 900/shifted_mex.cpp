#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


int mex(vector<int> &num,int n) {
    int s = num[n-1];
    vector<int> map(s);

    for(int i=0; i<=s; i++) { map[i] = 0; }

    for(int i=0; i<n;i++) {
        if(num[i] < 0) { continue; }
        map[num[i]]++;
    }

    int m;
    for(int i=0; i<s; i++) {
        if(map[i] == 0) {
            m = i;
            break;
        }
    }

    return m;
}

int main() {
    int t;cin>>t;
    while(t--) {
        int n;
        cin>>n;

        vector<int> num(n);
        for(int i=0; i<n; i++) {
            cin>>num[i];
        }

        sort(num.begin(),num.end());
        int x = mex(num,n);
        int larger_mex = x;
        
        if(x < num[n-1]) {
            // if(x > 0) { x = -x; }
            for(int i=0; i<n; i++) {
                num[i] += x;
            }
            larger_mex = mex(num,n);
        }

        cout<<larger_mex<<endl;
    }
    return 0;
}