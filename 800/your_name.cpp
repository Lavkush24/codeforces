#include<iostream>
using namespace std;
#include<string>


bool rearrange(string s,string t,int n) {
    for(char ch: t) {
        for(int i=0; i<n; i++) {
            if(ch == s[i]) {
                s.erase(i,1);
                break;
            }
        }
    }

    return s.empty();
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s,t;
        cin>>s>>t;

        if(rearrange(s,t,n)) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}