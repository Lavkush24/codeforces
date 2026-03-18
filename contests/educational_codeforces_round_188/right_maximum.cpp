#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int operation() {
    int n;
    cin>>n;

    int num[n]; 
    int max_ele = -1;

    for(int i=0; i<n; i++) { cin>>num[i]; if(num[i] > max_ele) max_ele = num[i]; }

    vector<int> map(max_ele+1,0);
    for(int i=0; i<n; i++) { map[num[i]]++; }

    int max = max_ele;
    while(map[max] == 0) { max--; }
    int op = 0;
    int i = n-1;
    while(i >= 0) {
        map[num[i]]--;
        if(num[i] >= max) { 
            op++; 
            while(map[max] == 0 && max > 0) max--; 
        }
        i--;
    }

    return op;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<operation()<<endl;
    }
    return 0;
}