#include<iostream>
using namespace std;

int next_contestants(int *score,int n,int k) {
    int count = 0;
    for(int i=0; i<n; i++) {
        if(score[i] > 0 && (score[i] >= score[k-1])) {
            count++;
        }
    }
    return count;
}

int main() {
    int n,k;
    cin>>n>>k;
    int *score;
    score = new int[n];

    for(int i=0; i<n; i++) {
        cin>>score[i];
    }
    cout<<next_contestants(score,n,k)<<endl;
    return 0;
}