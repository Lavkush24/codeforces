#include<iostream>
using namespace std;


int warm() {
    int n;
    cin>>n;

    int j = 1;
    int larger_sum = 0;

    while(n > 0) {
        larger_sum += (abs(n-j));
        n--,j++;
    }

    return (larger_sum/2) + 1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<warm()<<endl;
    }
    return 0;
}