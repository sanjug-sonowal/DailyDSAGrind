#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    // upper part
    for(int i = 0; i < rows; i++){
        //spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout<<"  ";
        }

        //stars
        for(int j = 0; j < 2 * (i) + 1; j++){
            if(j == 0 || j == 2 * i){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }

        cout<<endl;

    }


    // lower part
    for(int i = 0; i < rows - 1; i++){
        //spaces
        for(int j = 0; j < i + 1; j++){
            cout<<"  ";
        }

        int stars = 2 * (rows - i - 1 )- 1;
        //stars
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