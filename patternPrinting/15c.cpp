#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    int count = rows * (rows + 1) / 2;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i; j++){
            cout<<count<<" ";
            count--;
        }
        cout<<endl;
    }
    return 0;
}