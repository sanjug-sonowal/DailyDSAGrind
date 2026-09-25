#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    //upper hald = inverted
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2 * (rows - i - 1) + 1; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    //lower half = pyramid
    for(int i = 1; i < rows; i++){
        for(int j = 0; j < (rows - i - 1); j++){
            cout<<" ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}