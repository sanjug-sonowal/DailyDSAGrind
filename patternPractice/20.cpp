/*
    1
   121
  12321
 1234321
123454321
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < (rows - i - 1); j++){
            cout<<"  ";
        }
        for(int j = 0; j < 2 * i + 1; j++){
            if(j <= i){
                cout<<j + 1<<" ";
            }else{
                cout<<2 * i - j + 1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}