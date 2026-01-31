#include<iostream>
using namespace std;
#include<string>


// bool final_work_possible(string s,string t) {
//     int term = 0,k,j;

//     bool first = false;

//     for(j=0; j<t.length(); j++) {
//         k = term;
//         while(k < s.length()) {
//             if(t[j] == s[k] && !first) {
//                 term = k;
//                 first = true;
//             } 
//             else if((t[j]) == s[k]){
//                 return false;
//             }
//             k++;
//         }
//         if(first == false) {
//             return false;
//         }
//         else {
//             first = false;
//         }
//     }

//     return true;
// }


bool check_string(string s,string t) {
    int *pos = new int[t.length()];
    int l=0;
    int j=0;
    int term = 0;
    while(j < t.length()) {
        if(term >= s.length()) {
            return false;
        }
        
        if(t[j] == s[term]) {
            pos[l++] = term;
            j++;
        }
        term++;
    }

    j = 0;
    for(int j=0; j<l; j++) {
        char c = s[pos[j]];

        int i;
        if(j == l-1) {
            i = pos[j] + 1;
        }
        else {
            i = pos[j+1];
        }
        
        while(i < s.length()) {
            if(c == s[i]) {
                return false;
            }
            i++;
        }
    }

    return true;
}

int main() {
    int n;
    cin>>n;

    for(int i=0; i<n; i++) {
        string s,t;
        cin>>s>>t;

        if(s.length() == t.length()) {
            for(int j=0; j<s.length(); j++) {
                if(s[j] == t[j]) {
                    continue;
                }
                else {
                    cout<<"NO"<<endl;
                    return 0;
                }
            }
            cout<<"YES"<<endl;
            return 0;
        }

        if(check_string(s,t)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}