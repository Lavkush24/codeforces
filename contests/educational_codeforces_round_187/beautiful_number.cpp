#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int t;
    cin>>t;

    while(t--) {
        long long x;
        cin>>x;

        vector<int> digit;

        while(x > 9) {
            int y = x%10;
            digit.push_back(y);
            x = x/10;
        }

        sort(digit.begin(),digit.end());

        int n = digit.size();
        int sum = x;
        int i=0;
        while(i < n && (sum+digit[i]) < 10) {
            sum += digit[i++];
        }

        // cout<<i<<endl;
        cout<<n-i<<endl;
    }
    return 0;
}