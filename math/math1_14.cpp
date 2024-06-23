#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a;
    while(cin>>a){
        int d,h,m,s;
        s=a%60;
        a=a/60;
        m=a%60;
        a=a/60;
        h=a%24;
        a=a/24;
        d=a;
        cout<<d<<" days\n";
        cout<<h<<" hours\n";
        cout<<m<<" minutes\n";
        cout<<s<<" seconds\n";
    }
    
    
    return 0;
}