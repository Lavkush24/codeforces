#include<iostream>
using namespace std;
#include<string>


bool isPrime(long long n) {

    if(n <= 1) {
        return false;
    }

    long long it = 2;
    while(it*it <= n) {   /* this square root optimization which reduce the loop iteration by underroot(n) because after undertrrot x value the factor start to repeting so , there is no sense to check them again*/
        if(n%it == 0) {
            return false;
        }
        it++;
    }
    return true;
}

string simple_rept() {
    int n,k;
    cin>>n>>k;
    
    if(n >=2 && k >= 2) {
        return "No";
    }
    else if(k == 1) {
        return (isPrime(n) ? "Yes" : "No");
    }
    else {
        return ((k==2) ? "Yes": "No") ;
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<simple_rept()<<endl;
    }
    return 0;
}