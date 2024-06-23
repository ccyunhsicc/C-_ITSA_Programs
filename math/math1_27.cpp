#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b;
    while(cin>>a){
        cin>>b;
        int sum=(a+b)*(b-a+1)/2;
        cout<<sum<<"\n";
    }
    return 0;
}