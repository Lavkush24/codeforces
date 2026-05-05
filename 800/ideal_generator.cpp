#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    while(t--) {
        int k;
        cin>>k;

        cout<< (k%2 == 0 ? "No" : "Yes" )<<endl;
    }
    return 0;
}