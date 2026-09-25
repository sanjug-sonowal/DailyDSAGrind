/*
    1
   2 2
  3 3 3
 4 4 4 4
5 5 5 5 5
*/
#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            cout<<" ";
        }
        for(int j = 0; j < i + 1; j++){
            cout<<i + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}