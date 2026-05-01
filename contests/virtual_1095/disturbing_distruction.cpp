#include<iostream>
using namespace std;


// here approach is that finding the sorted sequences and summation of product fo each sequence but it not best possible solution ????????????
// int minimum_cost() {
//     int n;
//     cin>>n;

//     int num[n];

//     for(int i=0; i<n; i++) {
//         cin>>num[i];
//     }

//     long long min_cost = 0;
//     long long product = num[0];

//     for(int i=1; i<n; i++) {
//         if(num[i-1] <= num[i]) {
//             product *= num[i];
//         }
//         else {
//             min_cost += product;
//             product = num[i];
//         }
//     }

//     min_cost += product;
//     return min_cost%676767677;
// }


// tried second that i should need to maximize the smaller portion of sequence to choose because that prodict not increse much and it give the minimum answer 
// - find the sum of the array 
// - check whether last possition is occupied by one or not 
// - if yes than add one more in the answer else all one are not affect answer
// - if all element are one that each has not effect on answer

int minimum_cost() {
    int n;
    cin>>n;

    int num[n];
    int min_cost = 0;
    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(num[i] > 1) {
            min_cost += num[i];
        }
    }

    if(num[n-1] == 1) {
        min_cost += 1;
    }

    return min_cost%676767677;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<minimum_cost()<<endl;
    }
    return 0;
}