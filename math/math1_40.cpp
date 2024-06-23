#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        int sum=0;
        sum=(a+1)*a/2;
        for(int i=1;i<a;++i){
            cout<<i<<" + ";
        }
        cout<<a<<" = "<<sum<<"\n";
        
    }
    return 0;
}