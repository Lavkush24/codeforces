#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<algorithm>

int main() {
    string str;
    cin>>str;

    vector<char> numbers;

    for(char ch: str) {
        if(ch != '+') {
            numbers.push_back(ch);
        }
    }

    // sort the character array 
    sort(numbers.begin(),numbers.end());

    string res;
    for(int i=0; i<numbers.size()-1; i++) {
        res.push_back(numbers[i]);
        res.push_back('+');
    }
    res.push_back(numbers[numbers.size()-1]);
    
    cout<<res<<endl;
    return 0;
}