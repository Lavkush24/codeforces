/*  first try 
    ----- approach is that find out the 100/ai  check if all are multiple of 5 than not possible else possible
*/


#include<iostream>
using namespace std;
#include<string>

string result() {
    int n;
    cin>>n;
    
    int map[101];
    for(int i=0; i<=n; i++) { map[i] = 0; }
    
    for(int i=1; i<=n; i++) {
        int x;
        cin>>x;
        map[(100/x)]++;
    }
    // cout<<"hello"<<endl;

    int counter = 0;
    for(int i=1; i<=n; i++) { 
        if(map[i] > 0) {
            counter++;
        }
    }

    if(n <= 2 && map[1] == 0) {
        return "No";
    }

    if(map[1] > 0) {
        return "Yes";
    }

    if(n > 2 && counter <= 2) {
        return "No";
    }
    
    return "Yes";
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<result()<<endl;
    }
    return 0;
}