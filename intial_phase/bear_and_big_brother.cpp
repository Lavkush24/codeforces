#include<iostream>
using namespace std;


int main() {
    int l,b;
    cin>>l>>b;

    int years = 0;
    while(l <= b) {
        l *= 3;
        b *= 2;
        years++;
    }

    cout<<years<<endl;
    return 0;
}