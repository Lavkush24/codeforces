#include<iostream>
using namespace std;
#include<string>

int round_trip() {
    int r,x,d,n;
    cin>>r>>x>>d>>n;

    string s;
    cin>>s;

    int round = 0;
    int i = 0;
    while(i < n) {
        if(s[i] == '1') {
            r = r-d;
            round++;
        }

        if(s[i] == '2' && r < x) {
            r = r-d;
            round++;
        }

        if(r < 0) { 
            r = 0;
        }
        
        i++;
    }

    return round;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<round_trip()<<endl;
    }
    return 0;
}