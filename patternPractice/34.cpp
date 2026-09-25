/*
1 2 3 4 
  1 2 3 
    1 2 
      1
*/

#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }
        for(int j = 0; j < rows - i; j++){
            cout<<j + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}