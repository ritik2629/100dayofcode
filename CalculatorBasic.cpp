#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enter first no :";
    cin>>a;
    cout<<"Enter second no :";
    cin>>b;
    cout<<"Enter the operator :";
    cin>>op;
    switch(op){
        case ('+') :cout<<"Total is :"<<(a+b)<<endl;
            break;
        case ('-') :cout<<"Total is :"<<(a-b)<<endl;
            break;
        case ('*') :cout<<"Total is :"<<(a*b)<<endl;
            break;
        case ('/') :cout<<"Total is :"<<(a/b)<<endl;
            break;
        case ('%') :cout<<"Total is :"<<(a%b)<<endl;
            break;
        default: cout<<"wrong input"<<endl;
    }
}