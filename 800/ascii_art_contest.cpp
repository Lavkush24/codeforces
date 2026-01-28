#include<iostream>
using namespace std;



int main() {
    int g,c,l;
    cin>>g>>c>>l;

    bool check = abs(g-c) >= 10 || abs(g-l) >= 10 || abs(c-l) >= 10;

    if(check) {
        cout<<"check again"<<endl;
    }
    else {
        int largest = (g > c) ? (g > l ? g : l) : (c > l ? c : l);
        int smallest = (g < c) ? (g < l ? g : l) : (c < l ? l : c);

        int median = (g+l+c) - (largest+smallest);
        cout<<"final "<<median<<endl;
    }
    return 0;
}