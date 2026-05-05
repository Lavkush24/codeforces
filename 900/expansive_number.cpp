#include<iostream>
using namespace std;
#include<string>

/*  here we get minimum value is 1 which possble in case when we remove all the non_zero element form leading part only and all last zeros that lead to reamin only a single digit which give minimum value 1 */

int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        int n = s.length();
        int non_zero = 0;
        bool first_non_zero = false;
        int ind = -1;

        for(int it=n-1; it >= 0; it--) {
            if(s[it] != '0' && !first_non_zero) {
                first_non_zero = true;
                ind = it;
            }
            else if(first_non_zero && s[it] != '0'){
                non_zero++;
            }
        }

        cout<<(((n-ind-1) + non_zero))<<endl;
    }

    // while (t--) {
    //     string s;
    //     cin >> s;
    //     int n = s.size();
    //     bool met_positive = false;
    //     int cnt_zero = 0;
        
    //     for (auto i = n - 1; i >= 0; --i) {
    //         if (s[i] != '0') {
    //             met_positive = true;
    //         } else if (met_positive) {
    //             cnt_zero++;
    //         }
    //     }

    //     cout<<cnt_zero<<endl;
        
    //     cout << n - (cnt_zero + 1) << '\n';
    // }
    return 0;
}