#include<iostream>
using namespace std;
#include<string>

int main() {
    
    int n;
    cin>>n;
    
    string ans[8] = {"Drive","No","No","Yes","Yes","Yes","palindrome","10"};
    cout<<ans[n-1]<<endl;
    return 0;
}