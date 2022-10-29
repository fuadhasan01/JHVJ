

#include <bits/stdc++.h>
using namespace std;

int maxOfArrayElement(int arr[],int n, int maximum){
    if(n==0){
        if(arr[0]>maximum){
            return arr[0];
        }
        else{
            return maximum;
        }

    }
    if(maximum<arr[n]){
        maximum = arr[n];
    }

    maxOfArrayElement(arr,n-1,maximum);
}

int main(){

    int arr[] = {11,10,30,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int maximum = arr[len-1];
    int result = maxOfArrayElement(arr,len-1,maximum);
    cout << result;
}




