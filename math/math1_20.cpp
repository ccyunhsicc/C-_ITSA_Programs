#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        cout<<setiosflags(ios::uppercase)<<hex<<a<<"\n";
    }
    return 0;
}