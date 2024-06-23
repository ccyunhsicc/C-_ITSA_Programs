#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a%400==0 || (a%4==0 && a%100!=0)){
            cout<<"Bissextile Year\n";
        }else{
            cout<<"Common Year\n";
        }
        
    }
    return 0;
}