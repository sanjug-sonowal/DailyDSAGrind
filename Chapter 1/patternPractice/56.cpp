/*
1 
0 0 
1 1 1 
0 0 0 0 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            if((i + 1) % 2 != 0){
                cout<<"1"<<" ";
            }else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}