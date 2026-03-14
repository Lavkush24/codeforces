#include<iostream>
using namespace std;
#include<string>


bool distracted(string s,int n) {
    int *map_days;
    map_days = new int[26];
    
    for(int i=0; i<26; i++) {
        map_days[i] = 0;
    }
    
    int prev_task = s[0];
    int ind = s[0]-'A';
    map_days[ind]++;
    for(int i=1; i<n; i++) {
        ind = s[i]-'A';
        if(prev_task != s[i] && map_days[ind] > 0) {
            return true;
        }
        prev_task = s[i];
        map_days[ind]++;
    }

    return false;
}


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n; 
        cin>>n;
        string s;
        cin>>s;

        if(distracted(s,n)) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}