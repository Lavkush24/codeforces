#include<iostream>
using namespace std;


int team_diff() {
    int n;
    cin>>n;

    if(n <= 3) {
        return n;
    }

    return n%2;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<team_diff()<<endl;
    }
    return 0;
}