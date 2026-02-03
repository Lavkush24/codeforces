#include<iostream>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;

        int hao = 0;

        while(n > 3) {
            hao++;
            n = n-2;
        }

        if(n == 3) {
            hao++;
        }

        cout<<hao<<endl;
    }
    return 0;
}