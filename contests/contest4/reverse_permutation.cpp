#include<iostream>
using namespace std;
#include<climits>

// int find_largest_index(int *arr,int l,int n) {
//     int max = l;
//     for(int i=l+1; i<n; i++) {
//         if(arr[max] < arr[i]) {
//             max = i;
//         }
//     }
//     return max;
// }

void reverse_range(int *arr,int l,int r) {
    int i=l,j=r;
    while(i < j) {
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i++,j--;
    }
}


void solve() {
    int n;
    cin>>n;
    int *nums = new int[n+1];
    for(int i=1;i<=n; i++){ cin>>nums[i];}

    int l = 1;
    for(int i=1; i<=n; i++) {
        if(nums[i] != (n-i+1)) {
            l = i;
            break;
        }
    }

    int r = l;
    while(nums[r] != (n-l+1) && r <= n) {
        r++;
    }

    reverse_range(nums,l,r);

    for(int j=1; j<=n; j++) {
        cout<<nums[j]<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        // int n;
        // cin>>n;

        // int *nums = new int[n];
        // int *map = new int[n+1];

        // for(int i=0; i<=n; i++) { map[i] = -1;}

        // for(int j=0; j<n; j++) {
        //     cin>>nums[j];
        //     map[nums[j]] = j;
        // }

        // int l = 0,r = 0;

        // /// why this is not work due time is in quadratic as each the array search size reduce still it take worst case time compelxcith is > O(n2)  
        // // while(l < n) {
        // //     int x = find_largest_index(nums,l,n);
        // //     if(x > l) {
        // //         r = x;
        // //         break;
        // //     }
        // //     l++;
        // // }


        // // here we need only one iteration due to use of map
        // int i = n;
        // while(i > 0) {
        //     if(map[i] != -1 && map[i] != l) {
        //         r = map[i];
        //         break;
        //     }
        //     else if(map[i] == l) {
        //         l++;
        //     }
        //     i--;
        // } 

        // reverse_range(nums,l,r);

        // for(int j=0; j<n; j++) {
        //     cout<<nums[j]<<" ";
        // }
        // cout<<endl;

        solve();
    }
    return 0;
}