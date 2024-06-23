#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    float a;
    while(cin>>a){
        float t;
        t=a*(1.8)+32.0;
        cout<<fixed<<setprecision(1)<<t<<"\n";
    }
    
    
    return 0;
}