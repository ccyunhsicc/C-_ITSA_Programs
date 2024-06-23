#include<iostream>
#include<cmath>

using namespace std;

int gcd(int a,int b){
    int temp;
    if(a<b){
        gcd(b,a);
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    int a,b;
    while(cin>>a){
        cin>>b;
        cout<<gcd(a,b)<<"\n";
    }
    return 0;
}