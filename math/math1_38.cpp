#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    while(cin>>a){
        cin>>b>>c;
        if(a+b>c&&b+c>a&&a+c>b){
            cout<<"fit\n";
        }else{
            cout<<"unfit\n";
        }
        
    }
    return 0;
}