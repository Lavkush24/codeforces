#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

// void sort_toys(int *arr,int n) {
//     int i=0;
//     while(i<n) {
//         int min = i;
//         for(int j=i+1; j<n; j++) {
//             if(arr[j] < arr[min]) {
//                 min = j;
//             }
//         }
//         swap(arr[min],arr[i]);
//         i++;
//     }
// }

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;

        vector<int> toys(n);
        
        for(int i=0; i<n; i++) { 
            cin>>toys[i];
        }
        
        int even_flag = 0;
        int odd_flag = 0;
        for(int i=0; i<n; i++) {
            if(toys[i]%2 == 0) {
                even_flag++;
            }
            else if(toys[i]%2 == 1) {
                odd_flag++;
            }
        }

        if(!(even_flag == n || odd_flag == n)) {
            sort(toys.begin(),toys.end());
        }
        

        for(int i=0; i<n ; i++) {
            cout<<toys[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}