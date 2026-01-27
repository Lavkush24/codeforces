#include<iostream>
using namespace std;



int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int l,a,b;
        cin>>l>>a>>b;

        int max = a;
        int j = (a+b)%l;

        if(max < j)  {
            max = j;
        }
        
        while(j != a) {
            j = (j+b)%l;
            if(max < j) { max = j; }
        }

        cout<<max<<endl;
    }
    return 0;
}