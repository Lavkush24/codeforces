/*
approch work like this as we need to convert all bit in zero if we perform operation even numver of time the bit remain unchanged and od noumer is like oepariotn perform one time so we need to make sure that we perfom odd number of time opearion on the 1 to make it 0
*/


#include<iostream>
using namespace std;
#include<string>



int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        string s; 
        cin>>s;

        int one,zero;
        one = zero = 0;

        for(char ch: s) {
            if(ch == '0') { zero++; }
            else { one++; }
        }

        if(zero == n) {
            cout<<0<<endl;
        }
        else if(n%2 == 1 && one%2 == 1) {
            cout<<-1<<endl;
        }
        else {
            char pos = '0';
            int x = zero;
            if(one%2 == 0 && zero%2 == 0) {
                x = one;
                pos = '1';
            }

            cout<<x<<endl;

            for(int i=0; i<n; i++) {
                if(s[i] == pos) {
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}