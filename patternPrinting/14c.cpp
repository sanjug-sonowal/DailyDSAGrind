#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            if((i + j) % 2 == 0){
                cout<<"1"<<" ";
            }else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}