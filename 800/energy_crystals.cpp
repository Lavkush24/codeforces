#include<iostream>
using namespace std;


int smaller(int a,int b) {
    return a>b ? b : a;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x;
        cin>>x;

        int a,b,c;
        a = b = c = 0;

        int *min = &a;

        while(a < x || b < x || c < x) {
            int m;
            if(*min == a) {
                m = smaller(b,c);
            }
            else if(*min == b) {
                m = smaller(a,c);
            }
            else {
                m = smaller(a,b);
            }

            *min = (m*2)%2 == 0 ? m*2+1 : m*2;
            *min = 

        }


    }


    // int a = 7;
    // int *b = &a;

    // (*b)++;
    // cout<<a<<endl;
}