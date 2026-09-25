/*
*        *
**      **
* *    * *
*  *  *  *
*   **   *
*   **   *
*  *  *  *
* *    * *
**      **
*        *
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            if(j == 0 || j == i || i == rows - i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        for(int j = 0; j < 2 * (rows - i - 1); j++){
            cout<<"  ";
        }

        for(int j = 0; j < i + 1; j++){
            if(j == 0 || j == i || i == rows - i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i = 0; i < rows; i++){
        int k = rows - i - 1;
        for(int j = 0; j < k + 1; j++){
            if(j == 0 || j == k || k == rows - k){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        for(int j = 0; j < 2 * (rows - k - 1); j++){
            cout<<"  ";
        }

        for(int j = 0; j < k + 1; j++){
            if(j == 0 || j == k || k == rows - k){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
    return 0;
}