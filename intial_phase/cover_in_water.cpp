#include<iostream>
using namespace std;
#include<string>

int operation_one(string &s) {
    char flag = s[0];
    int conse_count  = 0;
    int all_dot = 0;

    for(char ch: s) {
        if(ch == '.' && flag == ch) {
            conse_count++;
        }
        else {
            flag = ch;
            conse_count = 1;
        }

        if(conse_count == 3) {
            return 2;
        }

        if(ch == '.') {
            all_dot++;
        }
    }

    return all_dot;
}


int main() {
    int t,n;
    cin>>t;

    int *res;
    res = new int[t];

    for(int i=0;i<t; i++) {
        res[i] = 0;
        cin>>n;
        
        string s;
        cin>>s;

        res[i] = operation_one(s);
    }


    for(int i=0; i<t; i++) {
        cout<<res[i]<<endl;
    }

    return 0;
}