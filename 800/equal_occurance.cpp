#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

int max_seq_len() {
    int n;
    cin>>n;

    int num[n];
    for(int i=0;i<n; i++) { cin>>num[i]; }

    vector<int> map(101,0);

    for(int i=0; i<n; i++) {
        map[num[i]]++;
    }

    sort(map.begin(), map.end());

    int max_seq = 0;
    for(int i=100; map[i] > 0 && i > 0; i--) {
        int x = (101-i)*map[i];
        if(x > max_seq) {
            max_seq = x;
        }
    }

    return max_seq;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<max_seq_len()<<endl;
    }
    return 0;
}