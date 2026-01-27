#include<iostream>
using namespace std;
#include<string>


bool lexio_compare(string s,string t) {
    bool st = false;
    for(int i=0; i<s.length(); i++) {
        if(s[i] != t[i]) {
            if(s[i] < t[i]) {
                st = true;
            }
            break;
        }
    }
    return st;
}

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        string *a = new string[n];

        for(int j=0; j<n; j++) {
            cin>>a[j];
        }

        for(int j=1; j<n; j++) {
            if(lexio_compare(a[j-1]+a[j],a[j]+a[j-1])) {
                a[j] = (a[j-1] + a[j]);
            }
            else {
                a[j] = (a[j] + a[j-1]);
            }
        }

        cout<<a[n-1]<<endl;
    }

    return 0;
}