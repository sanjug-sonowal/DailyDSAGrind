/*
A 
B C 
D E F 
G H I J 
K L M N O
*/
#include<iostream>
using namespace std;
int main(){
    int rows = 5;
    char ch = 'A';
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            if(ch > 'Z') ch = 'A';
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}