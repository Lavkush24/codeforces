#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>


int main() {
    int t;
    cin>>t;

    while(t--) {
        string s;
        cin>>s;

        vector<int> map(10,0);

        for(char ch: s) {
            map[ch-'0']++;
        }

        string res = "";
        for(int i=9; i>=0; i--) {
            if(map[i] > 0) {
                res.push_back((char)(i+48));
                map[i]--;
            }
            else {
                int j = i;
                while(map[j] <= 0) { j++; }
                res.push_back((char)(j+48));
                map[j]--;
            }
        }

        cout<<res<<endl;
    }
    return 0;
}