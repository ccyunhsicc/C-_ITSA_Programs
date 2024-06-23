#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    float a;
    while(cin>>a){
        a=a*(1.6);
        cout<<fixed<<setprecision(1)<<a<<"\n";
    }
    return 0;
}