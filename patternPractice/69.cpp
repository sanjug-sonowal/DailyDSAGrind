/*
* * * * * * * * *
  *           *
    *       *
      *   *
        *
      *   *
    *       *
  *           *
* * * * * * * * *
*/ 
#include<iostream>
using namespace std;
int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout<<"  ";
        }
        int k = rows - i - 1;
        for(int j = 0; j < 2 * k + 1; j++){
            if(j == 0 || j == 2 * k || i == 0){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i = 1; i < rows; i++){
        int k = rows - i - 1;
        for(int j = 0; j < k; j++){
            cout<<"  ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            if(j == 0 || i == 0 || j == 2 * i || i == rows - 1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}