#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x,y;
        cin>>n>>x>>y;

        int *bank = new int[n];
        for(int i=0; i<n; i++) { cin>>bank[i]; }

        long long max_profit = bank[0];
        int j = 1;
        while(j < n) {
            max_profit += (bank[j]/x)*y;
            j++;
        }

        long long between_profit = max_profit;

        int i=1;
        while(i < n) {
            long long profit = between_profit - bank[i-1] - (bank[i]/x)*y + bank[i] + (bank[i-1]/x)*y;
            if(profit > max_profit) {
                max_profit = profit;
            }
            between_profit = profit;
            i++;
        }

        cout<<max_profit<<endl;
    }
    return 0;
}