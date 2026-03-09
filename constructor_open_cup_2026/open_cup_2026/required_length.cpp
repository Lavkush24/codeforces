#include<iostream>
using namespace std;
#include<cmath>

class Pair {
    public:
        int a;
        int b;

        Pair(int a,int b) {
            this->a = a;
            this->b = b;
        }
};

void req_len() {
    int x,y,z;
    cin>>x>>y>>z;

    if(x == 1 && y == 1 && z == 1) {
        cout<<3<<" "<<3<<endl;
        return ;
    }

    int max_len = x>y ? x : y;
    if(z < x || z < y || z > max_len+1) {
        cout<<0<<" "<<0<<endl;
        return;
    }

    int min_len = x+y-max_len;

    Pair *res;
    int a,b;
    if(z > max_len) {
        if(x > y) {
            a = pow(10,max_len)-1;
            b = pow(10,min_len)-1;
        }
        else {
            b = pow(10,max_len)-1;
            a = pow(10,min_len)-1;
        }
        res = new Pair(a,b);
    }
    else {
        if(x > y) {
            b = pow(10,min_len-1);
            a = pow(10,max_len-1);
        }
        else {
            a = pow(10,min_len-1);
            b = pow(10,max_len-1);
        }
        res = new Pair(a,b);
    }

    cout<<res->a<<" "<<res->b<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        req_len();
    }
    return 0;
}