#include <bits/stdc++.h>
using namespace std;

int sumOfNElement(int n){
    if(n==1){
        return pow(2,n)*(2*n+1);
    }
    return pow(2,n)*(2*n+1) + sumOfNElement(n-1);
}

int main(){
    int n = 5;

    int sum = sumOfNElement(n);
    cout<< sum << endl;
}





