#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter the no."<<endl;
    cin>>ch;
    
    if(ch>=97 && ch<=122){
        cout<<"Alphabet is lowercase "<<endl;
    }else if(ch>=65 && ch<=90){
        cout<<"Alphabet is uppercase"<<endl;
    }else{
        cout<<"it is no"<<endl;
    }
}