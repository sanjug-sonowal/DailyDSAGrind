/*
Z 
Z Y 
Z Y X 
Z Y X W 
Z Y X W V 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<(char) ('Z' - j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}