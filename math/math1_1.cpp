#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    float up,down,high;
    while(cin>>up){
        cin>>down>>high;
        float area=(up+down)*high/2;
        cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<area<<"\n";
        
    }
    return 0;
}