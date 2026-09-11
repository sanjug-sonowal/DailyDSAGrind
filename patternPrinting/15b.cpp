#include<iostream>
using namespace std;

int main(){
    int rows = 5;
    for(int i = 0; i < rows; i++){
        long long val = 1;
        for(int j = 0; j < i + 1; j++){
            cout<<val<<" ";
            val = val * (i - j) / (j + 1);
        }
        cout<<endl;
    }
    return 0;
}