/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rows = 5;
    vector<int>prev = {1};

    for(int i = 0; i < rows; i++){
        for(int x : prev){
        cout<<x<<" ";
    }
    cout<<endl;

    vector<int>curr(prev.size() + 1, 1);

    for(int j = 1; j < prev.size(); j++){
        curr[j] = prev[j - 1] + prev[j];
    }

    prev = curr;
    }
    
    return 0;
}