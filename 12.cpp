#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){

    if(n==0){
        cout << arr[n] << endl;
    }
    else{
        cout << arr[n] << endl;
        return reverseArray(arr,n-1);
    }

}

int main(){

    int arr[] = {1,2,3,4,5};
    int len = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr,len-1);
}

