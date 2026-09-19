#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n = 11;
    double cx = (n - 1) / 2.0;
    double cy = (n - 1) / 2.0;
    double radius = n / 2.0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            double dx = i - cx;
            double dy = j - cy;
            double dist = sqrt(dx * dx + dy * dy);

            if(abs(dist - radius) <= 0.5){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}