#include<iostream>
#include<cmath>

using namespace std;

int main(){
    float a,b;
    while(cin>>a){
        cin>>b;
        float d=sqrt(a*a+b*b);
        if(d<=100.0){
            cout<<"inside\n";
        }else{
            cout<<"outside\n";
        }
    
    }
    return 0;
}