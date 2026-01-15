#include<iostream>
using namespace std;
#include<vector>

// sort the coins
void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_coins(int *coins,int size) {
    for(int i=0; i<size; i++) {
        for(int j=i; j<size; j++) {
            if(coins[j] < coins[i]) {
                swap(&coins[i],&coins[j]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int *coins;
    coins = new int[n];
    int total_value_coins = 0;

    for(int i=0; i<n; i++) {
        cin>>coins[i];
        total_value_coins += coins[i];
    }

    sort_coins(coins,n);

    int minimum_coin = n-1;
    int take = coins[minimum_coin]; 
    total_value_coins -= coins[minimum_coin];   

    while(take <= total_value_coins) {
        minimum_coin--;
        take += coins[minimum_coin];
        total_value_coins -= coins[minimum_coin];
    }

    cout<<n-minimum_coin<<endl;

    return 0;
}