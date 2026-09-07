#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    //upper part
    for(int i = 0; i < rows; i++){
        //spaces
        for(int j = 0; j < rows - i - 1; j++){
            cout<<"  ";
        }

        //numbers
        for(int j = 0; j < 2 * i + 1; j++){
            if(j <= i){
                cout<<j + 1<<" ";
            }else{
                cout<<2 * i - j + 1<<" ";
            }
        }
        cout<<endl;
    }

    //lower part
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<"  ";
        }

        int k = rows - i - 2;
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