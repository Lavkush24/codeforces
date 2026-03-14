#include<iostream>
using namespace std;
#include<string>



// string cyclic_right_shift(string s) {
//     char c = s[0];
//     for(int i=s.length()-1; i>0; i--) {
//         s[(i+1)%s.length()] = s[i];
//     }

//     s[1] = c;

//     return s;
// }


// void operation(string &s,string t,int &count_zero) {
//     for(int i=0; i<s.length(); i++) {
//         if(t[i] == '1' && s[i] != '1') {
//             s[i] = '1';
//             count_zero--;
//         }
//     }
// }


int max_differnce_between_ones(string s,int n) {
    int difference = 0;

    int start = 0;
    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            start = i;
            break;
        } 
    }

    int i = start;
    int end = start + 1;
    do {
        if(s[end%n] == '1') {
            if(difference < (end-i)) {
                difference = end - i - 1;
            }
            i = end;
        }
        end++;
    }
    while(end%n != (start+1)%n);
    return difference;
}

// int main() {
//     int t;
//     cin>>t;

//     for(int i=0; i<t; i++) {
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;

//         int count_zero = 0;
//         for(char ch: s) {
//             if(ch == '0') {
//                 count_zero++;
//             }
//         }

//         int d = 0;
//         while(count_zero > 0) {
//             d++;
//             string t = cyclic_right_shift(s);
//             operation(s,t,count_zero);
//         }

//         // string t = cyclic_right_shift(s);
//         // cout<<t<<endl;

//         cout<<d<<endl;
//     }

//     return 0;
// }


int main() {
    int t;
    cin>>t; 

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        string s;
        cin>>s;

        cout<<max_differnce_between_ones(s,n)<<endl;
    }

    return 0;
}