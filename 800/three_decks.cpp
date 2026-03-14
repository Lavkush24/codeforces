#include<iostream>
using namespace std;
#include<string>

string decks() {
    int a,b,c;
    cin>>a>>b>>c;

    int req = a+b+c;
    if(req%3 != 0) { return "No"; }

    req = req/3;

    if(b > req) { return "No"; }

    return "Yes";
}


int main() {
    int t;
    cin>>t;

    while(t--) {
        cout<<decks()<<endl;
    }
    return 0;
}