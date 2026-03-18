// idea : we can start from the least beauty apple than we eat all apple only the apple remain whose beauty is repeated .
/* so i idea simply find non-duplicate element in the array */

#include<iostream>
using namespace std;
#include<vector>

void non_duplicate() {
    int n;
    cin>>n;

    vector<int> map(101,0);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        map[x]++;
    }

    int app = 0;
    for(int i=0; i<101; i++) {
        if(map[i] != 0) {
            app++;
        }
    }
    
    cout<<app<<endl;
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        non_duplicate();
    }
    return 0;
}