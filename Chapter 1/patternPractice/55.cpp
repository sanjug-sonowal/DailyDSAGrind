/*
15 14 13 12 11 
10 9 8 7 
6 5 4 
3 2 
1 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    int val = rows * (rows + 1) / 2;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i; j++){
            cout<<val<<" ";
            val--;
        }
        cout<<endl;
    }
    return 0;
}