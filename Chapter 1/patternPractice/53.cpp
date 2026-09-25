/*
1 
1 1 
1 2 1 
1 3 3 1 
1 4 6 4 1 
*/

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