#include<iostream>

using namespace std;

int main(){
    int A[6];
    for(int i=0;i<6;++i){
        cin>>A[i];
    }
    int sum=0;
    for(int i=0;i<6;++i){
        sum+=A[i]*A[i]*A[i];
    }
    cout<<sum<<"\n";
    return 0;
}