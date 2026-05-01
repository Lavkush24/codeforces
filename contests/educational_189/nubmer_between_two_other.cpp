#include<iostream>
using namespace std;
#include<string>

string present() {
    long long x,y;
    cin>>x>>y;

    long long i = 2;  
    long long z = x;
    while(z < y) {
        z *= i;
        if(z%x == 0 && y%z != 0) {
            return "Yes";
        }
        i++;
    }

    return "No";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<present()<<endl;
    }
    return 0;
}