#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int *map = new int[101];

    for(int i=0; i<=100; i++)  { map[i] = 0; }

    for(int i=0; i<n; i++) {
        int x;
        cin>>x;
        map[x]++;
    }


    int max = 0;
    for(int i=0; i<=100; i++) {
        if(map[i] > max) {
            max = map[i];
        }
    }

    cout<<max<<endl;
    return 0;
}