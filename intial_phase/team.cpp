#include<iostream>
using namespace std;

bool decision_to_solve(int a,int b,int c) {
    return (a==1 && b==1) || (b==1 && c==1) || (a==1 && c==1);
}

int main() {
    int n; 
    cin>>n;

    int problem_solved = 0;

    for(int i=0; i<n; i++) {
        int a,b,c;
        cin>>a>>b>>c;
        if(decision_to_solve(a,b,c)) {
            problem_solved++;
        }
    }

    cout<<problem_solved<<endl;
    return 0;
}