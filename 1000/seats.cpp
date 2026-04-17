



#include<iostream>
using namespace std;
#include<string>
#include<vector>

int valid_seats() {
    int n;
    string s;
    cin>>n>>s;

    if(n <= 2) {
        return 1;
    }  

    int one = 0;
    vector<int> map;

    for(int i=0; i<n; i++) {
        if(s[i] == '1') {
            map.push_back(i+1);
            one++;
        }
    }

    
    if(one == 1) {
        int x = map[0]/3;
        int y = (n-map[0]+1)/3;
        
        if(x < 0) { x = 0;}
        if(y < 0) { y = 0; }
        return one+x+y ;
    } 
    
    if(one == 0) {
        return (n+2)/3;
    }
    
    one += map[0]/3;
    int i=0,j=i+1;
    
    int m = map.size();
    while(j < m) {
        int zero = map[j]-map[i]-1;
        if(zero > 0) {
            one += zero/3;
        }
        i++,j++;
    }
    
    if((n-map[m-1]) > 0) {
        one += (n-map[m-1]+1)/3;
    }

    return one ;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<valid_seats()<<endl;
    }
    return 0;
}