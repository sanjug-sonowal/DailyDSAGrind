#include<iostream>
using namespace std;
int main(){
    int rows = 11;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < rows; j++){
            double cx = (rows - 1) / 2.0;
            double cy = (rows - 1) / 2.0;
            double radius = rows / 2.0;

            double dx = (i - cx);
            double dy = (j - cy);

            double dist = dx*dx + dy*dy;

            if(dist - radius * radius <= 0.5){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}