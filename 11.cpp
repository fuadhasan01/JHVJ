#include <bits/stdc++.h>
using namespace std;

void countEvenOdd(int arr[],int n,int countEven, int countOdd){
    if(arr[n]%2==0){
        countEven++;
    }
    else{
        countOdd++;
    }
    if(n==0){
        cout << "The number of even: "<<countEven<<" and odd " << countOdd << endl;
    }

    else return countEvenOdd(arr,n-1,countEven,countOdd);
}

int main(){
    int countEven = 0, countOdd = 0;
    int arr[] = {1,1,2,1,1};
    int len = sizeof(arr) / sizeof(arr[0]);
    countEvenOdd(arr,len-1,countEven,countOdd);
}

