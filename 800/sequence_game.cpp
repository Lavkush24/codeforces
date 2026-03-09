#include<iostream>
using namespace std;
#include<algorithm>
#include<climits>

void check_x() {
    int n;
    cin>>n;
    int num[n];
    int min=INT_MAX,max=INT_MIN;
    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(min > num[i]) { min = num[i]; }
        if(max < num[i]) { max = num[i]; }
    }

    int x; cin>>x;

    if(x >= min && x <= max) {
        cout<<"Yes"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        check_x();
    }
}