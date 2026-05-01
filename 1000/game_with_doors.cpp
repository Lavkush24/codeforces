#include<iostream>
using namespace std;
#include<algorithm>

int main() {
    int t;
    cin>>t;

    while(t--) {
        int l,r,L,R;
        cin>>l>>r>>L>>R;

        int m = max(max(l,r), max(L,R));
        int s = min(min(l,r), min(L,R));
        int overlap = 0;
        int i = s;
        while(i <= m) {
            if((i >= l && i <= r) && (i >= L && i <= R)) {
                overlap++;
            }
            i++;
        }

        if((l == L && r == R)) {
            cout<<overlap-1<<endl;
        }
        else if(l == L || r == R) {
            cout<<overlap<<endl;
        }
        else {
            cout<<overlap+1<<endl;
        }
    }
    return 0;
}