#include<iostream>
using namespace std;

int main(){

    cout<<"namstey dunia "<<endl;
    int a=45;
    cout<<"The value of a is "<<a<<endl;

    char ch= 'r';
    cout<<"The character is "<<ch<<endl;

    bool b = true;
    cout<<"Value of bool is "<<b<<endl;

    float f =1.2;
    cout<<"value of float is "<<f<<endl;

    double d =26.29;
    cout<<"value of float is "<<f<<endl;

    int size=sizeof(a);
    cout<<"Size of a "<<size<<endl;

    //Type casting

    int c='a';
    cout<<c<<endl;

    char cha =97;
    cout<<cha<<endl;  


    int x=26;
    int y=29;
    bool first =(x==y);
    bool second =(x>=y);
    bool third =(x<=y);
    bool fourth =(x!=y);
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
    cout<<fourth<<endl;

}