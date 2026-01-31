#include<iostream>
using namespace std;


// long long find_y() {
//     long long x;
//     cin>>x;

//     long long mul = 10;
//     long long y = 1;
    
//     while(((x*mul)+y) % (x+y) != 0) {
//         y++;
//         if(y == mul) {
//             mul *= 10;
//         }
//     }

//     return y;
// }

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;
        cout<<2*x<<endl;
    }

    return 0;
}