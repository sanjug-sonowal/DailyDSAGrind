/*
A B C D 
B C D E 
C D E F 
D E F G 
*/

#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            cout<<(char)('A' + j + i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}