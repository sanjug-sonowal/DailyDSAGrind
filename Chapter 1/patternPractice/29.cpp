/*
4 4 4 4 
3 3 3 
2 2 
1 
*/

#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i; j++){
            cout<<rows - i<<" ";
        }
        cout<<endl;
    }
    return 0;
}