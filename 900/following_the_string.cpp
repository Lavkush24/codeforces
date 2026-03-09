#include<iostream>
using namespace std;

void trace_to_str() {
    int n;
    cin>>n;

    int *trace = new int[n];
    for(int i=0; i<n; i++) { cin>>trace[i]; }

    int *map = new int[26];
    for(int i=0; i<26; i++) { map[i] = 0; } 
    char *str = new char[n];
    for(int i=0; i<n; i++) { str[i] = ' '; }
    int k = 0;
    str[k] = 'a';
    map['a'-'a']++;
    char it = 'b';

    for(int i=1; i<n; i++) {
        if(trace[i] == 0) {
            continue;
        }
        bool flag = false;
        for(int j=0; j<=it-'a'; j++) {
            if(map[j] == trace[i]) {
                char t = j + 'a';
                str[i] = t;
                map[j]++;
                flag = true;
                break;
            }
        }

        if(!flag) {
            while(str[k] != ' ') { k++; }
            str[k++] = it;
            map[it-'a']++;
            it++;
        }else if(trace[i] == 1) {
            while(str[k] != ' ') { k++; }
            str[k++] = str[i] = it;
            map[it-'a']++;
            it++;
        }
        
    }

    for(int i=0; i<n; i++) {
        if(str[i] == ' ') {
            str[i] = it++;
        }
    }

    for(int i=0; i<n; i++) {
        cout<<str[i];
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        trace_to_str();
    }

    // int it = 1;
    // char t ='a';
    // cout<<++t<<endl;
    return 0;
}