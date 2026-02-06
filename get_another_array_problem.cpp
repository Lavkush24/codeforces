#include<iostream>
using namespace std;
#include<climits>

long long gcd(long long n,long long m) {
    long long small = n < m ? n : m;
    long long g = 1;

    for(long long i = small; i>0; i--) {
        if(n % i == 0 && m%i == 0) {
            g = i;
            break;
        }
    }

    return g;
}

bool isPrime(long long n) {
    for(long long i=2; i<n; i++) {
        if(n%i == 0) {
            return false;
        }
    }
    return true;
} 

int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        long long *nums = new long long[n];

        int max = -1;
        for(int j=0; j<n; j++) {
            cin>>nums[j];

            if(j != 0 && nums[j-1] > max) {
                max = nums[j];
            }
        }

        if(max < nums[n-1]) {
            max = nums[n-1];
        }

        long long x = -1;
        bool found = false;
        for(long long j=2; j<INT_MAX && !found; j++) {
            if(!found && isPrime(j)) {
                for(int k=0; k<n; k++) {
                    if(gcd(j,nums[k]) == 1) {
                        x = j;
                        found = true;
                        break;
                    }
                }
            }
        }

        cout<<x<<endl;

    }

    
    return 0;
}

