/*
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/

#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<"  ";
        }
        int k = rows - i - 1;
        for(int j = 0; j < 2 * (k) + 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}