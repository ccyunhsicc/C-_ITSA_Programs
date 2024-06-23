#include<iostream>

using namespace std;

int main(){
    int A[6];
    for(int i=0;i<6;++i){
        cin>>A[i];
    }
    for(int i=5;i>=0;--i){
        cout<<A[i];
        if(i!=0){
            cout<<" ";
        }
    }
    cout<<"\n";
    return 0;
}