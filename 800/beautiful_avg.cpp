#include<iostream>
using namespace std;


// int beauty_avg() {
//     int n;
//     cin>>n;

//     int num[n];
//     int sum = 0;
//     for(int i=0; i<n; i++) { cin>>num[i]; sum += num[i]; }

//     int max_avg = sum/n;
//     int sum_t = sum;

//     int i=0;
//     while(i < n-1) {
//         sum -= num[i];
//         int avg = sum/(n-i-1);
//         if(max_avg < avg) { 
//             max_avg = avg;
//         }
//         i++;
//     }

//     sum = sum_t;
//     int j=n-1;
//     while(j > 0) {
//         sum_t -= num[j];
//         int avg = sum_t/j;
//         if(max_avg < avg) {
//             max_avg = avg;
//         }
//         j--;
//     }

//     sum -= (num[0]+num[n-1]);
//     i = 1,j = n-2;
//     while(i <= j) {
//         int avg = sum/(j-i+1);
//         if(max_avg < avg) {
//             max_avg = avg;
//         }
//         if(i == j) {
//             sum -= num[i];
//         }
//         else {
//             sum -= (num[i]+num[j]);
//         }
//         i++,j--;
//     }

//     return max_avg;
// }


int beauty_avg() {
    int n; cin>>n;

    int max = -1;
    for(int i=0; i<n; i++) { int x; cin>>x; if(x > max) max = x; }


    return max;
}

int main() {
    int t;cin>>t;
    while(t--) {
        cout<<beauty_avg()<<endl;
    }
    return 0;
}