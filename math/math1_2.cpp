#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main(){
    float down,high;
    while(cin>>down){
        cin>>high;
        float area=down*high/2;
        cout<<fixed<<setprecision(1)<<area<<"\n";
    }
    return 0;
}