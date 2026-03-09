#include<iostream>
using namespace std;

int dnum(int n) {
    int sum = 0;
    while(n > 0) {
        int x = n%10;
        sum += x;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x; 
        cin>>x;

        if(x >=0 && x <= 9) {
            cout<<0<<endl;
            continue;
        }

        if(x%9 == 0) {
            cout<<10<<endl;
        }

    }
    return 0;
}