#include<iostream>
using namespace std;


int main(){
    int n,m; 
    cin>>n>>m;

    bool colored = false;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            char c;
            cin>>c;

            if(c == 'C' || c== 'M' || c == 'Y') {
                colored = true;
            }
        }
    }

    if(colored) {
        cout<<"#Color"<<endl;
    }
    else {
        cout<<"#Black&White"<<endl;
    }

    return 0;
}