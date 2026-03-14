#include<iostream>
using namespace std;


int main() {
    long long int n,k;
    cin>>n>>k;

    long long int even = n/2;
    long long int odd = n-even;

    long long int the_number;
    if(k <= odd) {
        the_number = 1;
        while(k > 1) {
            the_number += 2;
            k--;
        }
    }
    else {
        the_number = 2;
        long long int p = k-odd;
        while(p > 1) {
            the_number += 2;
            p--;
        } 
    }

    cout<<the_number<<endl;

    return 0;
}