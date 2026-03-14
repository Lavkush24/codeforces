#include<iostream>
using namespace std;

int abs_difference(int a,int b) {
    return (a-b) >= 0 ? (a-b) : -(a-b);
}


int main() {
    int pos_i,pos_j;

    int value;
    for(int i=0; i<5; i++) {
        for(int j=0; j<5; j++) {
            cin>>value;
            if(value == 1) {
                pos_i = i;
                pos_j = j;
            }
        }
    }

    cout<<abs_difference(2,pos_i) + abs_difference(2,pos_j)<<endl;
    return 0;
}