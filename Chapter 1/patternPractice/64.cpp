/*
Z 
Z Y Z 
Z Y X Y Z 
Z Y X W X Y Z 
Z Y X W V W X Y Z 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 2 * i + 1; j++){
            if(j <= i){
                cout<<(char)('Z' - j)<<" ";
            }else{
                cout<<(char)('Z' - 2 * i + j)<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}