#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    int counter = 1;
    for(int i = 0; i < rows; i++){

        int start = counter;
        counter += i + 1;
        
        for(int j = 0; j < i + 1; j++){
            if(i % 2 != 0){
                cout<<start + j<<" ";
            }else{
                cout<<start + i - j<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}