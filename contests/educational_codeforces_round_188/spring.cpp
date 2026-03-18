#include<iostream>
using namespace std;


/// fail on the large test cases  why ??                                    

void contribute() {
    long long a,b,c,m;
    cin>>a>>b>>c>>m;

    int map[3] = {0,0,0};
    long long water[3] = {0,0,0};

    for(long long i=1; i<=m; i++) {
        if(i%a == 0) map[0] = 1;
        if(i%b == 0) map[1] = 1;
        if(i%c == 0) map[2] = 1;

        int cont = map[0] + map[1] + map[2];

        if(cont == 1) { 
            for(int j=0; j<3; j++) { if(map[j] == 1) water[j] += 6; }
        }
        else if(cont == 2) {
            for(int j=0; j<3; j++) { if(map[j] == 1) water[j] += 3; }
        }
        else if(cont == 3) {
            for(int j=0; j<3; j++) { if(map[j] == 1) water[j] += 2; }
        }

        map[0] = map[1] = map[2] = 0;
    }

    cout<<water[0]<<" "<<water[1]<<" "<<water[2]<<endl;
}

int main() {
    int t;
    cin>>t;

    while(t--) {
        contribute();
    }
    return 0;
}