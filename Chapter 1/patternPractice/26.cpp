/*
1 1 1 1 
1 0 0 1 
1 0 0 1 
1 1 1 1
*/
#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            if(i == 0 || j == 0 || i == rows - 1 || j == rows - 1){
                cout<<"1"<<" ";
            }else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}