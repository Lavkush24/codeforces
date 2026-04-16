#include<iostream>
using namespace std;
#include<vector>



/// it fails becaue there si requirement to each elememnt have exactly 2 different neighbour not 1 or 3 its exacltly 3 that is not considered in below solution

// int main() {
//     int t;
//     cin>>t;

//     while(t--) {
//         int n,m;
//         cin>>n>>m;

//         vector<vector<int>> mat(n,vector<int>(m,0));

//         bool row_flag = false;
//         for(int i=0; i<n; i++) {
//             int counter = 0;
//             if(row_flag) { counter = 1; }
//             for(int j=0; j<m; j++) {
//                 mat[i][j] = counter;
//                 counter = (counter == 0) ? 1 : 0;
//             }
//             row_flag = !row_flag;
//         }

//         for(int i=0; i<n; i++) {
//             for(int j=0; j<m; j++) {
//                 cout<<mat[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
// }


int main() {
    int t;
    cin>>t;

    while(t--) {
        int n,m;
        cin>>n>>m;

        vector<vector<int>> mat(n,vector<int>(m,0));

        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<m; j++) {
        //         int curr = mat[i][j];
        //         int u = mat[i-1][j];
        //         int f = mat[i][j+1];
        //         int d = mat[i+1][j];
        //         int b = mat[i][j-1];

        //         if(u == -1 && f == -1 && d == -1 && b == -1) {
        //             if(curr == 0) {
        //                 f = 1;
        //                 d = 1;
        //             }
        //             else if(curr)
        //         }
        //         else {

        //         }
        //     }
        // }

        // for(int i=0; i<n; i++) {
        //     for(int j=0; j<m; j++) {
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
    }
}