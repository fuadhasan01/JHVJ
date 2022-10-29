#include <bits/stdc++.h>
using namespace std;

int power(int x, int y){
    if(y==1){
        return x;
    }
    return x * power(x,y-1);
}

int main(){
    int x,y;
    cout << "Enter the number of x: ";
    cin >> x;

    cout << "Enter the number of y: ";
    cin >> y;

    int result = power(x,y);
    cout << result;
}
