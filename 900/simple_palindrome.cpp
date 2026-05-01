#include<iostream>
using namespace std;
#include<string>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        int map[5];
        char alp[6] = {'a','e','i','o','u'};
        for(int i=0; i<5; i++) { map[i] = 0; }

        int i = 0;
        while(i < n) {
            map[i%5]++;
            i++;
        }

        string s = "";
        for(i=0; i<5; i++) {
            // cout<<map[i]<<" ";
            if(map[i] > 0) {
                while(map[i] > 0) { s.push_back(alp[i]); map[i]--; }
            }
        }

        cout<<s<<endl;
    }
    return 0;
}