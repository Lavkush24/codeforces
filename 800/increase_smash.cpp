/* i see a that for every new element i need to perform a increse operation and change the other element to 0 by using smash operation . so for each unique element two operation required except the last element it required on ly one element 

- so simply find unique element and res is unique*2 - 1
*/


#include<iostream>
using namespace std;
#include<vector>

int total_op() {
    int n;
    cin>>n;

    vector<int> map(101,0);
    for(int i=0; i<n; i++) {
        int x; cin>>x;
        map[x]++;
    }

    int unique = 0;
    for(int i=0; i<101; i++) {
        if(map[i] > 0) {
            unique++;
        }
    }

    return (2*unique)-1;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<total_op()<<endl;
    }
    return 0;
}