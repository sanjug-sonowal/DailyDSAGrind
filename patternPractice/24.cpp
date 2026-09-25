/*
A B C D 
E F G H 
I J K L 
M N O P
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            cout<<(char)('A' + (i * rows + j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}