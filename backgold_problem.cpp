#include<iostream>
using namespace std;
#include<vector>

// bool isPrime(int n) {
//     for(int i=2; i<n; i++) {
//         if(n%i == 0) {
//             return false;
//         }
//     }
//     return true;
// }

// int sum_possible(vector<int> prime,int n) {

// }

int main() {
    int n; 
    cin>>n;

    int max_two = 0;
    // for(int i=2; i<=n; i++) {
    //     vector<int> prime;
    //     if(isPrime(i)) {
    //         prime.push_back(i);
    //     }


    // }

    if(n%2 == 0) {
        max_two = n/2;
        cout<<max_two<<endl;
        for(int i=0; i<max_two; i++) {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else {
        max_two = (n/2) - 1;
        cout<<max_two+1<<endl;
        for(int i=0; i<max_two; i++) {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
    
    // cout<<3<<endl;

    return 0;
}