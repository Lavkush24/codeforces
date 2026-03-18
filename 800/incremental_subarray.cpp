/*
first try 

if the given a subarrya is like this 1,2,3 like than the result is n-m+1 else the answer shoule 1 as the sunbarray has seq of last and first that occurs only ones

***************** all test cases not passed ******************
*/



#include<iostream>
using namespace std;

int repetition() {
    int n,m;
    cin>>n>>m;

    int num[m+1];
    for(int i=1;i<=m; i++) {
        cin>>num[i];
        
    }

    if(m == 1) { 
        return n-num[1]+1;
    }

    bool incre_seq = true;
    for(int i=1; i<=m; i++) {
        if(num[i] != i) {
            incre_seq = false;
        }
    }

    return incre_seq ? (n-m+1) : 1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<repetition()<<endl;
    }
    return 0;
}