#include<iostream>
using namespace std;
#include<string>

string int_to_string(int n) {
    string temp;
    while(n > 0) {
        char c = (n % 10) + '0';
        temp += c;
        n = n/10;
    }

    string rev;
    for(int i=temp.length()-1; i>=0; i--) {
        rev += temp[i];
    } 

    return rev;
}

void abbrevated(string &s) {
    int l = s.length();
    if(l <= 10) return ;
    s = s[0] + int_to_string(l-2) + s[l-1];
}

int main() {
    string *tests;
    int size;
    cin>>size;

    tests = new string[size];
    for(int i=0; i<size; i++) {
        cin>>tests[i];
    }

    for(int i=0; i<size;i++) {
        abbrevated(tests[i]);
        cout<<tests[i]<<endl;
    }

    return 0;
}