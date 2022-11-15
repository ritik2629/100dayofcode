#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
    int a=0;
    int b=1;
    for(int i=0;i<=n;i++){
        int fib =a+b;
        a=b;
        b=fib;
        cout<<fib<<" ";
    }

}