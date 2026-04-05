#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>

int main() {
    int t;
    cin>>t;

    while(t--) {
        vector<int> seven(7);

        for(int i=0; i<7; i++) {
            cin>>seven[i];
        }

        sort(seven.begin(), seven.end());

        int sum = 0;
        for(int i=0; i<6; i++) {
            sum -= seven[i];
        }

        cout<<(sum+seven[6])<<endl;
    }
    return 0; 
}