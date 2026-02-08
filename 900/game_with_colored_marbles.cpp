#include<iostream>
using namespace std;
#include<climits>

int alice_score() {
    int n;
    cin>>n;

    int *num = new int[n];
    int max = INT_MIN;
    for(int i=0; i<n; i++) {
        cin>>num[i];
        if(num[i] > max) {
            max = num[i];
        }
    }

    int *map = new int[max+1];
    for(int i=0; i<=max; i++) { map[i] = 0; }

    for(int i=0;i<n; i++) {
        map[num[i]]++;
    }

    int single = 0;
    int g_one = 0;
    for(int i=0; i<=max; i++) {
        if(map[i] == 1) single++;

        if(map[i] > 1) g_one++;
    }

    int score =0;

    score += single%2 == 0 ? (single/2)*2 : (single/2 + 1)*2;

    score += g_one;

    return score;
}

int main() {
    int t;cin>>t;
    while(t--) {
        cout<<alice_score()<<endl;
    }
    return 0;
}