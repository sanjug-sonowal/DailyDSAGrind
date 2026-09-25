#include<iostream>
using namespace std;
int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            cout<<"  ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            if(j == 0 || j == 2 * i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<"  ";
        }

        int stars = 2 * (rows - i - 1) - 1;
        for(int j = 0; j < stars; j++){
            if(j == 0 || j == stars - 1){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}