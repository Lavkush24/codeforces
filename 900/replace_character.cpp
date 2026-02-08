#include<iostream>
using namespace std;
#include<string>
#include<map>
#include<climits>

string modified_string() {
    int n; cin>>n;
    string s;
    cin>>s;

    int *map = new int[26];
    for(int i=0; i<26; i++) { map[i] = 0; }

    for(char ch: s) {
        int ind = ch - 'a';
        map[ind]++;
    }


    // for(int i=0;i<26; i++) {
    //     cout<<map[i]<<" ";
    // }

    int max_ind=s[0]-'a',min_ind=s[0]-'a'; 

    
    for(int i=0; i<26; i++) {
        if(map[i] != 0) {
            if(map[i] > map[max_ind]){
                max_ind = i;
            }
            
            if(map[i] < map[min_ind]) {
                min_ind = i;
            }
        }
    }

    if(min_ind == max_ind) {
        int i=0,j=0;
        while(s[i] == s[j]) {
            j++;
        }
        s[j] = s[i];
        return s;
    }
    
    char min_char = min_ind + 'a';
    char max_char = max_ind + 'a';

    int i=0,j=0;
    while(s[i] != min_char) { i++; }
    while(s[j] != max_char) { j++; }
 
    // cout<<i<<j<<endl;
    s[i] = s[j];

    return s;
}   


int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<modified_string()<<endl;
    }

    // char a = 25 + 'a';
    // cout<<a<<endl;
    // return 0;
}