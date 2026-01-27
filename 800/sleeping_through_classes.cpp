#include<iostream>
using namespace std;
#include<string>

int sleep_classes() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int sleep = 0;
    int j = -1;
    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            j = i;
            break;
        }
        else {
            sleep++;
        }
    }

    if(j == -1) {
        return sleep;
    }

    for(int i=j+1; i<n; i++) {
        if(s[i] == '1') {
            if((i-j) > (k+1)) {
                sleep += (i-j)-(k+1);
            }
            j = i;
        }
    }

    if(j < n && (n-j) > (k+1)) {
        sleep += (n-j)-(k+1);
    } 

    return sleep;
}


int sleep_classes_2() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int sleep = 0;

    // bool flag = false;
    int try_sleep = 0;

    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            try_sleep = k+1;
        }
        else if(s[i] == '0' && try_sleep == 0) {
            sleep++;
        }
        
        if(try_sleep > 0 ) {
            try_sleep--;
        }
    }

    return sleep;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<sleep_classes_2()<<endl;
    }
    return 0;
}