#include<iostream>
using namespace std;


int layer(int t,int b) {
    bool black = true;
    int layer = 0;
    int two = 1;
    
    while(t >= two || b >= two) {
        if(black && b >= two) {
            b -= two;
            layer++;
            two *= 2;
            black = false;
        }
        else if(!black && t >= two) {
            t -= two;
            layer++;
            two *= 2;
            black = true;
        }
        else {
            break;
        }

        // cout<<t<<" "<<b<<" ";
    }

    return layer;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int a,b;
        cin>>a>>b;

        // if(a == 1 && b == 1) {
        //     cout<<1<<endl;
        // }

        int one = layer(a,b);
        int two = layer(b,a);

        cout<<(one > two ? one : two)<<endl;
    }
    return 0;
}