#include<iostream>
using namespace std;
#include<string>


string alternate() {
    string s;
    cin>>s;

    int pair = 0,thrice = 0;

    int i=0;
    while(i < s.length()-1) {
        int j = i+1;
        while(j<s.length() && s[j] == s[i]) { j++; }
        if(j-i+1 >= 4) { return "No"; }
        else if(j-i+1 == 2) { pair++; }
        else if(j-i+1 == 3) { thrice++; }
        i = j+1;
    }

    if(pair >= 3) { return "No"; }
    else if(pair+thrice >= 3) { return "No"; }
    else if(thrice >= 2) { return "No"; }

    return "Yes";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<alternate()<<endl;
    }
    return 0;
}