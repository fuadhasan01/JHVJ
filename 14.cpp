#include <bits/stdc++.h>
using namespace std;
void printEvenInrange(string str,int n){
        if((str.length()-n-1)<n){
            if(str[n]==str[str.length()-n-1]){
                printEvenInrange(str,n-1);
            }

            else{
                cout << "Not Palindrome" << endl;
                return;
            }
        }
        if((str.length()-n-1)>=n){
            cout << "Palindrome" << endl;
        }


    }




int main(){
    string str = "poopaa";
    printEvenInrange(str,str.length()-1);
}



