#include<iostream>
using namespace std;
#include<string>
#include<cmath>

int string_to_number(string s) {
    int num = 0;
    int fact = 10;
    for(char ch:s ) {
        if(ch == '0') {
            num = num*fact + 3;
        }
        else {
            num = num*fact + 6;
        }
    }
    return num;
}


int dec_to_bin(int n) {
    int bin = 0;
    int fact = 1;
    while(n > 0) {
        int x = n % 2;
        bin = x*fact + bin;
        fact *= 10;
        n = n/2;
    }
    return bin;
}


int smallest_integer() {
    int n; 
    cin>>n;

    if(n == 1) { return -1; }

    string s;
    for(int i=0;i<n; i++) {
        s.push_back(0);
    }


    int i = 0; 
    while(i < pow(2,n)-1) {
        int num ;
        if(i == 0) {
            num = string_to_number(s);
        }
        else if(i == 1) {
            s[n-1] = '1';
            num = string_to_number(s);
        }
        else {
            num = string_to_number(to_string(dec_to_bin(i)));
        }

        if(num % 33 == 0 && num % 66 == 0) {
            return num;
        } 
        i++;
    }

    return -1;
}


int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<smallest_integer()<<endl;
    }
    return 0;
}