#include<iostream>
using namespace std;
#include<string>


bool dangerous(string &players) {
    char flag = players[0];
    int count = 1;

    for(int i=1; i<players.length(); i++) {
        if(flag != players[i]) {
            count = 1;
            flag = players[i];
            continue;
        }

        count++;
        if(count >= 7) {
            return true;
        }
    }
    return false;
}

int main() {
    string players;
    cin>>players;

    if(dangerous(players)) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }

    return 0;
}