#include <bits/stdc++.h>
using namespace std;

int minOfArrayElement(int arr[],int n, int minimum){
    if(n==0){
        if(arr[0]<minimum){
            return arr[0];
        }
        else{
            return minimum;
        }

    }
    if(minimum>arr[n]){
        minimum = arr[n];
    }

    minOfArrayElement(arr,n-1,minimum);
}

int main(){

    int arr[] = {11,10,30,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int minimum = arr[len-1];
    int result = minOfArrayElement(arr,len-1,minimum);
    cout << result;
}





