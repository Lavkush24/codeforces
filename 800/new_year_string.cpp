#include<iostream>
using namespace std;
#include<string>

int year_string() {
    int n; cin>>n;
    string s;
    cin>>s;

    int two_six=0,two_five=0;

    int i=0,j=i+1,k=j+1,l=k+1;
    while(l < n) {
        if(s[i] == '2' && (s[j] == '0' && s[k] == '2')) {
            if(s[l] == '6') {
                two_six++;
            }
            else if(s[l] == '5') {
                two_five++;
            }
        } 
        i++,j++,k++,l++;
    }


    if(two_six) {
        return 0;
    }

    if(two_five > 0) {
        return 1;
    }

    return 0;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<year_string()<<endl;
    }
}