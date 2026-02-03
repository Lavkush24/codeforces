#include<iostream>
using namespace std;
#include<string>


int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int one=0,zero=0;

    for(int i=0; i<n; i++) {
        if(s[i] == 'z') {
            zero++;
        }
        else if(s[i] == 'n'){
            one++;
        }   
    }

    for(int i=0; i<one; i++) {
        cout<<"1 ";
    }

    for(int i=0; i<zero; i++) {
        cout<<"0 ";
    }

    cout<<endl;
    return 0;
}