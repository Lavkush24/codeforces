#include<iostream>
using namespace std;
#include<vector>


void result() {
    int n;
    cin>>n;

    int max = 0;
    int same = 0;
    int num[n];
    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(max < num[i]) { max = num[i]; }
        if(i > 0 && num[i] == num[i-1]) { same++; }
    }

    if(same == n-1) {
        cout<<"No"<<endl;
        return ;
    }


    cout<<"Yes"<<endl;
    for(int i=0; i<n; i++) {
        if(num[i] == max) {
            cout<<"1 ";
        }
        else {
            cout<<"2 ";
        }
    }
    cout<<endl;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        result();
    }
    return 0;
}