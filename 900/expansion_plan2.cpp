#include<iostream>
using namespace std;
#include<string>



int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,x,y;
        cin>>n>>x>>y;

        string s;
        cin>>s;

        int a,b;
        a = b = 0;

        for(char ch: s) {
            ch == '4' ? a++ : b++;
        }

        if(((a+2*b) >= (abs(x)+abs(y))) && (a+b) >= max(abs(x),abs(y))) {
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}