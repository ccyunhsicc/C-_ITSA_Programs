#include<iostream>
#include<cmath>

using namespace std;

int main(){
    long long a;
    while(cin>>a){
        if(a>=6){
            cout<<"6";
        }
        if(a>=28){
            cout<<" 28";
        }
        if(a>=496){
            cout<<" 496";
        }
        if(a>=8128){
            cout<<" 8128";
        }
        if(a>=33550336){
            cout<<" 33550336";
        }
        if(a>=8589869056){
            cout<<" 8589869056";
        }
        if(a>=137438691328){
            cout<<" 137438691328";
        }
        cout<<"\n";
    }
    return 0;
}