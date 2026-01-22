#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;

        int prev_sum = 0;
        int optimal_x;

        for(int j=2; j<=n; j++) {
            int k = n/j;
            int sum = j *((k*k + k)/2);
            // while(k*j <= n) {
            //     sum += (k*j);
            //     k++;
            // }

            if(sum > prev_sum) {
                optimal_x = j;
                prev_sum = sum;
            }
        }

        cout<<optimal_x<<endl;
    }

    return 0;
}

