#include<iostream>
using namespace std;



// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int n;
//         cin>>n;

//         int alice[n];
//         int bob[n];

//         for(int i=0; i<n; i++) { cin>>alice[i]; }
//         for(int i=0; i<n; i++) { cin>>bob[i]; }

//         int ai=0,aj=n-1,bi=0,bj=n-1;
//         for(int i=1; i<n; i++) {
//             int del = 0;
//             if(alice[ai] == bob[bi] || alice[ai] == bob[bj]) {
//                 del = alice[ai];
//                 ai++;
//             }
//             else {
//                 del = alice[aj];
//                 aj--;
//             }   

//             if(del == bob[bi]) {
//                 bi++;
//             }
//             else {
//                 bj--;
//             }
//         }

//         if(alice[ai] == bob[bi]) {
//             cout<<"Bob"<<endl;
//         }
//         else {
//             cout<<"Alice"<<endl;
//         }
//     }
//     return 0;
// }


bool bob_win() {
    int n;
    cin>>n;

    int alice[n];
    int bob[n];
    int forward,back;
    forward = back = 0;

    for(int i=0; i<n;i++) { cin>>alice[i]; }

    for(int i=0; i<n; i++) { 
        cin>>bob[i]; 
        // forward++;
        if(alice[i] == bob[i]) {
            forward++;
        } 
    }

    // cout<<forward<<endl;
    if(forward == n) { return true; }

    int j = 0;
    for(int i=n-1; i>=0; i--) {
        if(alice[i] == bob[j]) { back++; }
        j++;
    }
    // cout<<back<<endl;

    if(back == n) { return true; }

    return false;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        bool res = bob_win();
        if(res) {
            cout<<"Bob"<<endl;
        }
        else {
            cout<<"Alice"<<endl;
        }
    }
    return 0;
}