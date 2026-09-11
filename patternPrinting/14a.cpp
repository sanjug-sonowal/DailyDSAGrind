#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    int count = 1;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}