#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter second no: ";
    cin>>b;
    
    int ans=1;
    for(int i=0;i<b;i++){
        ans=ans*a;
    }
    cout<<"power is: "<<ans;
}

