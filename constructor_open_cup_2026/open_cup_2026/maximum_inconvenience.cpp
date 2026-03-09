#include<iostream>
using namespace std;


int maximum_n() {
    int x,y;
    cin>>x>>y;

    int max = x > y ? x : y;
    int b = x+y-max;
    
    if(x <= 1 && y <= 1) {
        return 1;
    } 
    
    if(max-1 == b) {
        return b-1;
    }

    while(max%b != 0) { max--; }
    return max-1;

    // int n = x > y ? y : x;
    // int max = x+y-n;

    // int inconvinence = n;

    // for(int i=(x+y); i<=(x+y)+10; i++) {
    //     int xr = i%x;
    //     int yr = i%y;
    //     if(xr > yr && xr > inconvinence) {
    //         n = i;
    //         inconvinence = xr;
    //     }
    //     else if(yr > xr && yr > inconvinence) {
    //         n = i;
    //         inconvinence = yr;
    //     }
    // }

    // return n;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<maximum_n()<<endl;
    }
    return 0;
}