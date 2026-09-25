/*
    1
   212
  32123
 4321234
543212345
 4321234
  32123
   212
    1
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
                cout<<i - j + 1<<" ";
            }else{
                cout<<j - i + 1<<" ";
            }
        }
        cout<<endl;
    }

    for(int i = 1; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout << "  ";
        }

        int m = rows - i;
        for(int j = 0; j < 2 * m - 1; j++){
            if(j < m){
                cout << m - j<<" ";
            }else{
                cout << j - m + 2<<" ";
            }
        }
        cout << endl;
    }
    return 0;
}