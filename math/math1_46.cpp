#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int a1,b1,a2,b2;
        char c;
        cin>>c>>a1>>b1>>a2>>b2;
        if(c=='+'){
            cout<<a1+a2<<" "<<b1+b2<<"\n";
        }
        if(c=='-'){
            cout<<a1-a2<<" "<<b1-b2<<"\n";
        }
        if(c=='*'){
            cout<<a1*a2-b1*b2<<" "<<a1*b2+a2*b1<<"\n";
        }
    }
    return 0;
}