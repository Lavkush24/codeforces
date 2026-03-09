#include<iostream>
using namespace std;
#include<string>
#include<vector>

// int minimum_seats() {
//     int n;cin>>n;
//     string s;
//     cin>>s;

//     if(n == 1 && s == "0") return 1;

//     vector<int> m;
//     for(int i=0;i<n; i++) {
//         if(s[i] == '1') m.push_back(i);
//     }

//     int seats = 0;
//     if(m.size() == 0) {
//         while(n > 1) {
//             n = n/2;
//             seats++;
//         }
//         return seats;
//     }

//     seats = m.size();

//     if(m[0] > 1)  {
//         int y = m[0] - 2;
//         if(y < 3) {
//             seats += 1;
//         }
//         else {
//             seats += (y/3 + 1);
//         }
//     }

//     for(int i=1; i<m.size(); i++) {
//         int zero = m[i]-m[i-1]-1;
//         if(zero < 2) seats += 0;
//         else seats += zero/3;
//     }

//     if(m[m.size()-1] <= n-3)  {
//         int zero = n-m[m.size()-1]-1;
//         int y = zero-2;
//         if(y < 3) {
//             seats += 1;
//         }
//         else {
//             seats += (y/3 + 1);
//         }
//     }

//     return seats;
// }


int seats_from_to(string &s,int from,int to) {
    return abs(from-to)/3;
}

int minimum_seats() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<minimum_seats()<<endl;
    }
    return 0;
}