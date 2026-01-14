#include<iostream>
using namespace std;

int main() {
    int a,n,m;
    cin>>n>>m>>a;

    long long int required_flagstones = 0;

    // if(n == m) {
    //     if (a == n) {
    //         required_flagstones++;
    //     }
    //     else if(a > n) {
    //         required_flagstones++;
    //     }
    //     else {
    //         required_flagstones = 1LL * ((n%a == 0) ? n/a : (n/a) + 1) * ((m%a == 0) ? m/a: (m/a)+1);
    //     }
    // }
    // else {
    //     if(n <= a) {
    //         required_flagstones = ((m%a == 0) ? m/a: (m/a)+1);
    //     }
    //     else if(m <= a) {
    //         required_flagstones = ((n%a == 0) ? n/a: (n/a)+1);
    //     }
    //     else {
    //         required_flagstones = 1LL * ((n%a == 0) ? n/a: (n/a)+1) * ((m%a == 0) ? m/a: (m/a)+1);
    //     }
    // }

    required_flagstones = 1LL * ((n%a == 0) ? n/a: (n/a)+1) * ((m%a == 0) ? m/a: (m/a)+1);
    cout<<required_flagstones<<endl;
    return 0;
}