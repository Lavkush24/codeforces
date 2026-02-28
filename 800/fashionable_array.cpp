#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int minimum_op() {
    int n;
    cin>>n;

    vector<int> num(n);

    for(int i=0; i<n; i++) {
        cin>>num[i];
    }

    sort(num.begin(),num.end());

    int first_e,first_o,last_e,last_o;
    first_e = first_o = last_e = last_o = -1;
    for(int i=0; i<n; i++) {
        if(num[i]%2 == 0) { 
            last_e = i; 
            if(first_e == -1) { first_e = i; }
        }
        if(num[i]%2 == 1) {
             last_o = i; 
             if(first_o == -1) { first_o = i; }
        }
    }

    int res = (n-1-(last_e-first_e)) >= (n-1-(last_o-first_o)) ? (n-1-(last_o-first_o)) : (n-1-(last_e-first_e));

    return res;
}


int main() {
    int t;cin>>t;
    while(t--) {
        cout<<minimum_op()<<endl;
    }
    return 0;
}