/*
1 2 3 4 5 4 3 2 1 
  1 2 3 4 3 2 1 
    1 2 3 2 1 
      1 2 1 
        1 
*/

#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }

        int k = rows - i - 1;
        for(int j = 0; j < 2 * k + 1; j++){
            if(j <= k){
                cout<<j + 1<<" ";
            }else{
                cout<<2 * k - j + 1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}