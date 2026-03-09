#include<iostream>
using namespace std;
#include<vector>


bool check_sort(vector<int> &num,int n) {

    if(n == 1) {
        return true;
    }

    int i=0,j=1;

    while(j < n) {
        if(num[i] > num[j]) {
            return false;
        }
        i++,j++;
    }

    return true;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> num(n);

        for(int i=0; i<n; i++) { cin>>num[i]; }

        if(check_sort(num,n)) {
            cout<<n<<endl;
        }
        else {
            cout<<1<<endl;
        }
    }
    return 0;
}