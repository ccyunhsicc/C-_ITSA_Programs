#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        if(a>=3&&a<=5){
            cout<<"Spring\n";
        }else if(a>=6&&a<=8){
            cout<<"Summer\n";
        }else if(a>=9&&a<=11){
            cout<<"Autumn\n";
        }else{
            cout<<"Winter\n";
        }
        
    }
    return 0;
}