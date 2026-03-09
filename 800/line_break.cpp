#include<iostream>
using namespace std;
#include<string>
#include<vector>

int max_word() {
    int n,m;
    cin>>n>>m;

    vector<string> words(n);
    for(int i=0;i<n; i++) { cin>>words[i]; }

    int x = 0;

    int i=0;
    while(m > 0 && i < n) {
        m -= words[i].length();
        if(m >= 0) {
            x++;
        }
        i++;
    }

    return x;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<max_word()<<endl;
    }
    return 0;
}