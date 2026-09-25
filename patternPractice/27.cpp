/*
A 
B C 
D E F 
G H I J 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<(char)('A' + (i * (i + 1)) / 2 + j) << " ";
        }
        cout<<endl;
    }
    return 0;
}