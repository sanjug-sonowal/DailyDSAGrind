#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 2 * i + 1; j++){
            if(j <= i){
                cout<<(char)('Z' - j)<<" ";
            }else{
                cout<<(char)('Z' - 2 * i + j)<<" "; // i - j for increament and i + j for decrement
            }
        }
        cout<<endl;
    }
    return 0;
}