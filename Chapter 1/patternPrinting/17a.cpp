#include<iostream>
using namespace std;

int main(){
    int rows = 4;
    //upper half
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < i + 1; j++){
            cout<<"*";
        }

        for(int j = 0; j < 2 * (rows - i - 1); j++){
            cout<<" ";
        }

        for(int j = 0; j < i + 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower half
    for(int i = 1; i < rows; i++){
        int k = rows - i - 1;
        for(int j = 0; j < k + 1; j++){
            cout<<"*";
        }

        for(int j = 0; j < 2 * (rows - k - 1); j++){
            cout<<" ";
        }

        for(int j = 0; j < k + 1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}