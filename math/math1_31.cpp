#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        int sum=0;
        for(int i=1;i<=a;++i){
            if(i%6==0&&i%12!=0){
                sum+=i;
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}