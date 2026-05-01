#include<iostream>
using namespace std;
#include<string>

string monster() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n%2 == 1) {
        return "No";
    }   

    int open = 0;

    for(char ch: s) {
        if(ch == '(') {
            open++;
        }
    }

    if(open == (n-open)) {
        return "Yes";
    }

    return "No";
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<monster()<<endl;
    }

    return 0;
}