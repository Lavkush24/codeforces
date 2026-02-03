#include<iostream>
using namespace std;
#include<vector>
#include<climits>

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int upper = INT_MAX,lower=1;
        vector<int> exclude;

        for(int i=0; i<n; i++) {
            int a,x;
            cin>>a>>x;

            if(a == 1 && x > lower) {
                lower = x;
            }
            else if(a == 2 && x < upper) {
                upper = x;
            }
            else if(a == 3) {
                exclude.push_back(x);
            }
        }

        int actual_exclude = 0;
        for(int i=0; i<exclude.size(); i++) {
            if((exclude[i] >= lower && exclude[i] <= upper)) {
                actual_exclude++;
            }
        }

        int res = upper-lower+1-actual_exclude;
        res = res < 0 ? 0 : res;
        cout<<res<<endl;
    }
    return 0;
}