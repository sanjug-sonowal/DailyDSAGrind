/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            int val = i * (i + 1) / 2 + j + 1;
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}