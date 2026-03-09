#include<iostream>
using namespace std;
#include<string>
#include<stack>


int main() {
    int t; cin>>t;

    while(t--) {
        string s;
        cin>>s;

        stack<char> st;
        int track_change = 0;

        int i=0;
        while(i < s.length()) {
            if(st.empty()) {
                track_change++;
                st.push(s[i]);
            }
            else {
                char c = st.top();
                if(c == '(' && s[i] == ')') { st.pop(); }
                else { st.push(s[i]); } 
            }
            i++;
        }

        if(track_change > 1) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }

    return 0;
}