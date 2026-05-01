#include<iostream>
using namespace std;


bool is_palindrome(int *num,int l,int r) {
    while(l <= r) {
        if(num[l] != num[r]) {
            return false;
        }
        l++,r--;
    }
    return true;
}


int palindromex() {
    int n;
    cin>>n;

    int num[n];
    int map[n+1];

    for(int i=0; i<n; i++) {
        cin>>num[i];
        map[i] = 0;
    }
    map[n] = 0;
    
    int start = 0,end = n-1;
    while(start <= end) {
        
    }
}