#include<iostream>
using namespace std;
#include<climits>

int possible_arrangement() {
    int n,k;
    cin>>n>>k;
    int *a = new int[n];
    int *b = new int[n];

    for(int i=0; i<n; i++) { cin>>a[i];}
    for(int i=0; i<n; i++) { cin>>b[i];}

    
}   

int main() {
    int t;
    cin>>t;
    while(t--) {
        cout<<possible_arrangement()<<endl;
    }
}