#include<iostream>
using namespace std;
#include<string>


string valid_parkour() {
    int x,y;
    cin>>x>>y;

    if(y > 0) {
        // while(y > 0) {
        //     x -= 2;
        //     y -= 1;
        // }
        x -= (2*y);
        y = 0;
    }
    else if(y < 0) {
        // while(y < 0) {
        //     x -= 4;
        //     y -= -1;
        // }
        x -= (4*abs(y));
        y = 0;
    }
    
    
    if(y == 0 && x > 0){
        // while(x > 0) {
        //     x -= 3;
        // }
        x %= 3;
    }

    if(x == 0 && y == 0) {
        return "Yes";
    }

    return "No";
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<valid_parkour()<<endl;
    }
    return 0;
}
