#include<iostream>
using namespace std;


void fair_divide() {
    int n;
    cin>>n;

    if(n%3 != 0) {
        cout<<-1<<endl;
        return ;
    }

    int c = n/3+1;
    
    for(int i=2; i>0; i--) {
        cout<<c-i<<" ";
    }
    cout<<c<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--) {
        fair_divide();
    }
    return 0;
}