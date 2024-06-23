#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int a,b;
    while(cin>>a){
        cin>>b;
        double sum=0;
        if(a<=60){
            sum=(double)a*(double)b;
        }else if(a>60&&a<=120){
            sum=60.0*(double)b;
            a=a-60;
            sum+=(double)a*(double)b*1.33;
        }else{
            sum=60.0*(double)b;
            sum+=60.0*(double)b*1.33;
            a=a-120;
            sum+=(double)a*(double)b*1.66;
        }
        cout<<fixed<<setprecision(1)<<sum<<"\n";
    }
    return 0;
}