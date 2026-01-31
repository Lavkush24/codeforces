#include<iostream>
using namespace std;
#include<string>

void sort_array(int *arr,char *color,int n) {
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

                char c = color[i];
                color[i] = color[j];
                color[j] = c;
            }
        }
    }
}

int main() {
    int t;
    cin>>t;

    string *res;
    res = new string[t];

    for(int i=0;i<t; i++) {
        int n;
        cin>>n;
        int *arr;
        char *color;
        arr = new int[n];   
        color = new char[n];

        char c = 'R';
        for(int j=0; j<n;j++) {
            cin>>arr[j];
            color[j] = c;
            c == 'R' ? c='B' : c='R';
        }

        sort_array(arr,color,n);

        for(int j=0; j<n-1; j++) {
            if(color[j] == color[j+1]) {
                res[i] = "NO";
                break; 
            }
        }

        if(res[i] != "NO") {
            res[i] = "YES";
        }
    }

    for(int i=0; i<t; i++) {
        cout<<res[i]<<endl;
    }

    return 0;
}