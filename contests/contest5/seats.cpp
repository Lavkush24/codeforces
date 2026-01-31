#include<iostream>
using namespace std;
#include<string>


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s; cin>>s;


        int first=0;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                first = i;
                break;
            }
        }

        // cout<<first<<endl;
        
        int i=0;
        if(first > 2) {
            i = 1;
        }
        
        int count_one = 0;
        if(s[i+1] != 1) {
            count_one++;
        }
        int counter = 0;
        i++;
        int j = 2;

        while(i < n-1) {
            if(s[i-1] != '1' && s[i+1] != '1') {
                if(j == 0 && s[i] == '0') {
                    count_one++;
                    j = 3;
                }
                else if(s[i] == '1'){
                    counter++;
                    j = 3;
                }
            }
            i++,j--;
        }   

        if(j == 0 && s[i-1] != '1') {
            count_one++;
        }

        cout<<count_one+counter<<endl;
    }
}