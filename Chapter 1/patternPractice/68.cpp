/*
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }
        for(int j = 0; j < 2 * (rows - i - 1) + 1; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int i = 1; i < rows; i++){
        int k = rows - i - 1;
        for(int j = 0; j < k; j++){
            cout<<"  ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}