#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n,a;
        cin>>n>>a;

        int *nums = new int[n];

        int small,greater,equal;
        small = greater = equal = 0;

        for(int j=0; j<n; j++) {
            cin>>nums[j];

            if(nums[j] > a) {
                greater++;
            }
            else if(nums[j] == a) {
                equal++;
            }

        }
        
        
        small = n-greater-equal;

        if(equal == n) {
            cout<<33<<endl;
        }
        else if(greater > small) {
            cout<<a+1<<endl;
        }
        else {
            cout<<a-1<<endl;
        }
    }
}