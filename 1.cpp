#include <bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0||n==1){
        return 1;
    }
    return fact(n-1)* n;
}

int main(){

    int n;
    cout << "Enter the number of n: ";
    cin >> n;

    int result = fact(n);
    cout << result << endl;
}
