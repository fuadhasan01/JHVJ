#include <bits/stdc++.h>
using namespace std;

int countDigit(int n){
    if(n<10){
        return 1;
    }
    return 1 + countDigit(n/10);
}

int main(){

    int n;
    cout << "Enter the number of n: ";
    cin >> n;

    int result = countDigit(n);
    cout << result;
}
