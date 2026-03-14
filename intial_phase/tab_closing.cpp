#include<iostream>
using namespace std;



double tab_len(double b,double a,double m) {
    double len = b < (a/m) ? b : a/m;
    return len;
}

int main() {
    int t;
    cin>>t; 
    
    for(int i=0; i<t; i++) {
        int a,b,n; 
        cin>>a>>b>>n;

        if(n == 1) {
            cout<<1<<endl;
            continue;
        }

        int moves = 0;

        double curr_len = 0.0;
        while(n > 0) {
            double len = n*tab_len(b,a,n);
            
            if(len != curr_len) {
                moves++;
            }
            n--;
            curr_len = len;
        }

        cout<<moves<<endl;
    }
    return 0;
}