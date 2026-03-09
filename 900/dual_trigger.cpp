#include<iostream>
using namespace std;
#include<string>


void possible() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    int i=0,j=n-1;
    while(j-i > 2) {
        if(s[i] == '1' && s[j] == '1') {
            if(j-i == 2 && s[i+1] == '0') {
                cout<<"Yes"<<endl;
                return ;
            }
            i++,j--;
        }
        else {
            if(s[i] == '0') { i++; }
            if(s[j] == '0') { j--; }
        }
    }

    while(i <= j) {
        if(s[i] == '1') {
            cout<<"No"<<endl;
            return ;
        }
        i++;
    }

    cout<<"Yes"<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        possible();
    }
}