#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    long long A[20];
    for(int i=0;i<20;++i){
        if(i==0||i==1){
            A[i]=1;
        }else{
            A[i]=i*A[i-1];
        }
    }
    while(cin>>a){
        cout<<A[a]<<"\n";
        
    }
    return 0;
}