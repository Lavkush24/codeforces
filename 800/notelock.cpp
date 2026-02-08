#include<iostream>
using namespace std;
#include<string>

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int lock = 0;
        int first_one = 0;
        while(s[first_one] != '1' && first_one < n) { first_one++; }

        if(first_one >= n) {
            cout<<0<<endl;
            continue;
        }
        lock++;
        int i = first_one,j=i+1;

        while(j < n) {
            if(s[j] == '1') {
                if((j-i) > k-1)
                    lock++;

                i = j;
            }
            j++;
        }

        cout<<lock<<endl;
    }
    return 0;
}