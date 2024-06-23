#include<iostream>
#include<string>

using namespace std;

int main(){
    double arr[10];
    double sum=0.0;
    int n=0;
    while(cin>>arr[n]){
        sum+=arr[n]*arr[n];
        //printf("%.6lf\n",sum);
        n++;
    }
    cout<<fixed<<sum<<"\n";
    return 0;
}