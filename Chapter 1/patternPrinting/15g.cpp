#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows - i - 1; j++){
            cout<<"  ";
        }

        long long val = 1;
        for(int j = 0; j < i + 1; j++){
            cout<<val<<"   "; // use oduble the size of the space
            val = val * (i - j) / (j + 1);
        }
        cout<<endl;
    }
    return 0;
}