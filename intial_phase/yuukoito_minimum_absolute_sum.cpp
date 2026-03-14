#include<iostream>
using namespace std;
#include<vector>


int main() {
    int t;
    cin>>t;

    for(int i=0; i<t; i++) {
        int n;
        cin>>n;
        int *numbers;
        numbers = new int[n];

        vector<int> pos;


        for(int j=0; j<n; j++) {
            cin>>numbers[j];
            if(j > 0 && j < n-1 && numbers[j] == -1) {
                numbers[j] = 0;
            }
        }

        if(numbers[0] == -1 && numbers[n-1] == -1) {
            numbers[0] = numbers[n-1] = 0;
        }
        
        if(numbers[0] == -1 || numbers[n-1] == -1) {
            int greater = numbers[0] > numbers[n-1] ? numbers[0] : numbers[n-1];
            numbers[0] = numbers[n-1] = greater;
        }

        cout<<abs(numbers[n-1]-numbers[0])<<endl;

        for(int j=0; j<n; j++) {
            cout<<numbers[j]<<" ";
        }
        cout<<endl;
        // cout<<absolue_difference_array_sum(numbers,n)<<endl;
    }

    return 0;
}