#include<iostream>
#include<string>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        //setbuf(stdin,NULL);
        string s;
        cin>>s;
        int l=s.size();
        for(int i=l-1;i>=0;--i){
            cout<<s[i];
        }
        cout<<"\n";
    }
}