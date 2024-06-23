#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    while(cin>>a){
        cin>>b;
        if(a<=100&&b<=100){
            cout<<"inside\n";
        }else{
            cout<<"outside\n";
        }
    
    }
    return 0;
}