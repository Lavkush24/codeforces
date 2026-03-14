#include<iostream>
using namespace std;


string find() {
    int n;
    cin>>n;

    int num[n];
    int duel_zero = 0;
    int one = 0;
    for(int i=0; i<n; i++) { 
        cin>>num[i]; 
        if(num[i] == 1) { one++; }
        if(i > 0 && (num[i]==0 && num[i-1]==0)) 
            duel_zero++; 
    }

    if(one == n) { return "Yes"; }

    if((n==2 && num[0] == num[1]) || duel_zero > 0) {
        return "Yes";
    }

    return "No";
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<find()<<endl;
    }
    return 0;
}