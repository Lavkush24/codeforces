#include<iostream>
using namespace std;

int pieces(int m,int n) {
    int count = 0;
    while(m > 1) {
        count += n;
        m = m-2;
    }

    if(m > 0) {
        count += (n/2)*m;
    }
    return count;
}

int main() {
    int m,n;
    cin>>m>>n;
    cout<<pieces(m,n)<<endl;
    return 0;
}