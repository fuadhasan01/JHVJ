#include <bits/stdc++.h>
using namespace std;

int maxOf2dArray(int arr[3][3], int row, int col,int max){
    int row2 = 2;
    int col2 = 2;
    if(row>-1){
        if(col>-1){

            if(arr[row][col]>max){

                max = arr[row][col];
            }
            return maxOf2dArray(arr,row, col-1, max);
        }
        else{
            return maxOf2dArray(arr,row-1, col2, max);
        }
    }
    else{
        return max;
    }
}

int main(){
    int arr[][3]={
        {
            1,2,3
        },
        {
            6,5,4
        },
        {
            7,9,8
        }
    };
    int row = sizeof(arr) / sizeof(arr[0]);
    int col = sizeof(arr[0]) / sizeof(arr[0][0]);
    int max = -4566466;

    int result = maxOf2dArray(arr,row-1,col-1,max);
    cout << "Max is "<<result<<endl;
}



