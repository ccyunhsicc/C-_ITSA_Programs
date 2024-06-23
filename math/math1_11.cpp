#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        cout<<"NT10="<<a/10<<"\n";
        a=a%10;
        cout<<"NT5="<<a/5<<"\n";
        a=a%5;
        cout<<"NT1="<<a<<"\n";
    }
    
    
    return 0;
}