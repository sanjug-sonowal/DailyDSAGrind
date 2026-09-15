#include<iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        //space
        for(int j = 0; j < rows - i - 1; j++){
            cout<<"  ";
        }

        for(int j = 0; j < 2 * i + 1; j++){
            cout<<(char)('A' + i - abs(i - j))<<" ";
            // if(j <= i){
            //     cout<<(char)('A' + j)<<" ";
            // }else{
            //     cout<<(char)('A' + 2 * i - j)<<" ";
            // }
        }
        cout<<endl;
    }
    return 0;
}