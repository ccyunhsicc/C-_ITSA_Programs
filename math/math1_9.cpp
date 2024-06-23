#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        long long sum=1;
        if(a>31){
            cout<<"Value of more than 31\n";
        }else{
            cout<<(sum<<a)<<"\n";
        }
    }
    
    
    return 0;
}