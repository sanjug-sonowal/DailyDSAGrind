/*
* * * * * * * * * 
*               * 
*   * * * * *   * 
*   *       *   * 
*   *   *   *   * 
*   *       *   * 
*   * * * * *   * 
*               * 
* * * * * * * * * 
*/


#include<iostream>
using namespace std;
int main(){
    int rows = 9;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            int top = i;
            int bottom = rows - 1 - i;
            int left = j;
            int right = rows - 1 - j;

            int layer = min(min(top,bottom),min(left,right));

            if(layer % 2 == 0){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        cout<<endl;
    }
    return 0;
}