#include<iostream>
using namespace std;
#include<cmath>
#include<vector>

int main() {
    int t;
    cin>>t;
    while(t--) {
        long long n;
        cin>>n;

        vector<long long> num;

        long long t = 11;
        int x = 0;
        while(n >= t) {
            if(n%t == 0) {
                num.push_back(n/t);
                x++;
            }
            t = (t-1)*10 + 1;
        }

        if(num.size() == 0) { 
            cout<<0<<endl;
            continue;
        }

        cout<<x<<endl;

        for(int i=num.size()-1; i>=0; i--) {
            cout<<num[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}