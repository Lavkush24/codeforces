#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int main() {
    int t;
    cin>>t;
    while(t--) {
        vector<int> map;

        for(int i=0; i<6; i++) {
            int x;
            cin>>x;
            map.push_back(x);
        }

        sort(map.begin(),map.begin()+3);
        sort(map.begin()+3,map.end());

        int i=0,j=5;
        int profit = 0;
        while(i <= j) {
            profit += (map[i++]*map[j--]);
        }

        cout<<profit<<endl;
    }
    return 0;
}