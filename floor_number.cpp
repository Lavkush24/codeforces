#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n,x;
        cin>>n>>x;

        int floor_number = 1;
        n -= 2;
        while(n > 0) {
            n -= x;
            floor_number++;
        }

        cout<<floor_number<<endl;
    }
    return 0;
}