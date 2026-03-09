#include<iostream>
using namespace std;
#include<vector>

int min_op() {
    int n;
    cin>>n;
    vector<int> num(n);

    int zero = 0;
    for(int i=0; i<n; i++) { cin>>num[i]; if(num[i] == 0) zero++; }

    if(zero == n) {
        return 0;
    }
    else if(zero == 0) {
        return 1;
    }
    else if((num[0]==0 || num[n-1]==0) && (zero-2) > 0) {
        return 1;
    }

    return 2;
}

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        cout<<min_op()<<endl;
    }
    return 0;
}
