#include<iostream>
#include<cmath>

using namespace std;

int f(int x){
    if(x<=100){
        return f(f(x+11));
    }else{
        return (x-10);
    }
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        cout<<f(a)<<"\n";
    }
    return 0;
}