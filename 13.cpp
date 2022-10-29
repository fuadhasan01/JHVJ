#include <bits/stdc++.h>
using namespace std;

void printEvenInrange(int n,int m){
    if(n<=m){
        if(n%2==0){
            cout << n << " ";
        }
        printEvenInrange(n+1,m);
    }
}


int main(){
    int n=3,m=10;
    printEvenInrange(n,m);
}


