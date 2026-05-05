#include<iostream>
using namespace std;
#include<vector>


/* along with there one other simpler way is that print in reverse order in case of odd n in case of even its always -1*/
void find_permutation(int n) {
    vector<int> num(n+1,0);
    int cnt = 1;
    for(int i=1; i<=n; i = i+2) {
        num[i] = cnt++;
    }

    for(int i=1; i<=n; i++) {
        if(num[i] == 0) {
            num[i] = cnt++;
        }
    }

    for(int i=1; i<=n; i++) {
        cout<<num[i]<<" ";
    } 
    cout<<endl;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n ;
        cin>>n;

        if(n%2 == 0) {
            cout<<-1<<endl;
        }
        else{
            find_permutation(n);
        }
    }
    return 0;
}