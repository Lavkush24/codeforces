#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++) {
        int n,h,l;
        cin>>n>>h>>l;

        int pair = 0;
        vector<int> nums;

        int small = h < l ? h : l;

        for(int j=0; j<n; j++) {
            int x;
            cin>>x;
            if(x <= h || x <= l) {
                nums.push_back(x);
            }
        }

        sort(nums.begin(),nums.end());

        int k=0,p=nums.size()-1;

        while(k < p) {
            if(nums[k] <= small || nums[p] <= small) {
                pair++;
            }
            k++,p--;
        }

        cout<<pair<<endl;
    }

    return 0;
}