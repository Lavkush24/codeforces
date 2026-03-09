#include<iostream>
using namespace std;

void pattern() {
    int *num = new int[3];

    int prod = 1;
    int zero = 0;
    for(int i=0; i<3; i++) {
        cin>>num[i];
        prod *= num[i];
        if(num[i] == 0) {
            zero++;
        }
    }

    if(zero == 1) {
        cout<<"No"<<endl;
        return ;
    }  
    else if(zero > 1) {
        if(num[2] != 0) {
            int last = num[2];
            num[2] = 0;
            if(num[0] == 0) {
                num[0] = last;
            }
            else {
                num[1] = last;
            }
        }
    }
    else {
        int last = -1;
        for(int i=0; i<3; i++) {
            if(prod/num[i] == num[i]) {
                last = i;
                break;
            }
        }

        if(last == -1) {
            cout<<"No"<<endl;
            return ;
        }
        else {
            int t = num[last];
            num[last] = num[2];
            num[2] = t;
        }
    }


    cout<<"Yes"<<endl;
    for(int i=0; i<3; i++) {
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        pattern();
    }
    return 0;
}