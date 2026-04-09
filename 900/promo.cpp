#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>



// time limit exceeded on this try again on 7 april 

// int main() {
//     int n,q;
//     cin>>n>>q;

//     vector<int> price(n+1);
//     for(int i=1; i<=n; i++) { cin>>price[i]; }
//     sort(price.begin()+1,price.end(),greater<int>());

//     while(q--) {
//         int x,y;
//         cin>>x>>y;

//         int sum = 0;
//         while(y--) {
//             sum += price[x--];
//         }

//         cout<<sum<<endl;
//     }
// }



/*  here i use the prefix sum to reduce the recalcualtion of the sum so the is able to pass all the testcases */

int main() {
    int n,q;
    cin>>n>>q;

    vector<int> price(n);

    for(int i=0; i<n; i++) {
        cin>>price[i];
    }

    sort(price.begin(),price.end(),greater<int>());
    
    vector<long long> prefix_price(n);
    long long sum = 0;
    for(int i=0; i<n; i++) {
        sum += price[i];    
        prefix_price[i] = sum;
    }

    while(q--) {
        long long free = 0;
        int x,y;
        cin>>x>>y;

        if(x-y-1 < 0) {
            free = prefix_price[x-1];
        } 
        else {
            free = prefix_price[x-1] - prefix_price[x-y-1];
        }

        cout<<free<<endl;
    }
    return 0;
}