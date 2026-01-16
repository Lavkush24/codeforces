#include<iostream>
using namespace std;
#include<string>
#include<climits>


void find_twoGM(string &s,int *substr) {
    for(int i=0; i<s.length()-1; i++) {
        string match = s.substr(i,2);
        for(int j=i+1; j<s.length()-1; j++) {
            string valid_match = s.substr(j,2);
            if(match == valid_match) {
                substr[i]++;
            }
        }
    }
} 


int main() {
    int l;
    string s;
    cin>>l>>s;

    int *substr;
    substr = new int[l];

    for(int i=0; i<l; i++) {
        substr[i] = 0;
    }

    find_twoGM(s,substr);
    
    int max_gm = 0;
    for(int i=1; i<l-2; i++) {
        if(substr[i] > substr[max_gm]) {
            max_gm = i;
        }
    }

    string max_gm_substr = s.substr(max_gm,2);
    cout<<max_gm_substr<<endl;

    return 0;
}