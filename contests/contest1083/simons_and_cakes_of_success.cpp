#include<iostream>
using namespace std;
#include<vector>


bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
}

int minimum_k() {
    int n;
    cin>>n;

    int min_k = 1;

    int fact = 2,prev_fact = 1;
    int m = (int)(n/2) + 1;
    while(n > 1 && fact <= m) {

        // if(isPrime(n)) {
        //     min_k *= n;
        //     return min_k;
        // }
        // while(n%fact == 0) {
        //     n = n/fact;

        // }

        min_k *= fact;
        if(n%fact == 0) {
            int y = n%fact;
            n = n/(fact*y);
            if(fact != prev_fact) {
                min_k *= fact;
                prev_fact = fact;
            }
        }
        else {
            fact++;
        }
    }

    return min_k;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<minimum_k()<<endl;
    }
    return 0;
}