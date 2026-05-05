#include<iostream>
using namespace std;
#include<string>



/* thsi way not a le to apss all the text cases */
// string check() {
//         int n;
//         string a,b;
//         cin>>n>>a>>b;

//         for(int i=1; i<n-1; i++) {
//             if(a[i] == '0') {
//                 if(b[i-1] == '0' && b[i+1] == '1') {
//                     swap(b[i-1],b[i+1]);
//                 }
//             }
//             else {
//                 if(b[i-1] == '0') {
//                     a[i] = '0';
//                     b[i-1] = '1';
//                 }
//                 else if(b[i+1] == '0') {
//                     a[i] = '0';
//                     b[i+1] = '1';
//                 }
//             }
//         }

//         if(a[0] == '1' && b[1] == '0') {
//             a[0] = '0';
//             b[1] = '1';
//         } 
        
//         if(a[n-1] == '1' && b[n-2] == '0') {
//             a[n-1] = '0';
//             b[n-2] = '1';
//         }


//         for(char ch: a) {
//             if(ch == '1') {
//                 return "No";
//             }
//         }

//         return "Yes";
// }


string check() {
    int n;
    string a,b;
    cin>>n>>a>>b;

    int zig_a_zero = 0,zig_b_zero = 0;
    for(int i=0; i<n; i++) {
        if(i & 1) {
            zig_a_zero += a[i] == '0';
            zig_b_zero += b[i] == '0';
        }
        else {
            zig_a_zero += b[i] == '0';
            zig_b_zero += a[i] == '0';
        }
    }

    if(zig_a_zero >= n/2 && zig_b_zero >= (n+1)/2) {
        return "Yes";
    }

    return "No";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<check()<<endl;
    }
}