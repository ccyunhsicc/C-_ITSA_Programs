#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        for(int i=1;i<a;++i){
            if(a%i==0){
                cout<<i<<" ";
            }
        }
        cout<<a<<"\n";
    }
    return 0;
}