
#include <bits/stdc++.h>
using namespace std;

int sumOfArrayElement(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    return arr[n] + sumOfArrayElement(arr,n-1);
}

int main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int result = sumOfArrayElement(arr,len-1);
    cout << result;
}




