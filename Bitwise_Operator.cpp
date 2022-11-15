#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;
    cout<< "a & b :"<<(a&b)<<endl;
    cout<< "a | b :"<<(a|b)<<endl;
    cout<< "~a :"<<(~a)<<endl;
    cout<< "a ^ b :"<<(a^b)<<endl;


    //Left shift and right shift operator

    cout<<(17>>1)<<endl;  //8

    cout<<(17>>2)<<endl;  //4

    cout<<(19<<1)<<endl;  //38

    cout<<(19<<2)<<endl;  //76


    //post-increment and pre-increment

    int i=25;
    cout<<(i++)<<endl;
    //25 , i=26
    cout<<(++i)<<endl;
    //27 i=27
    cout<<(i--)<<endl;
    //27, i=26
    cout<<(--i)<<endl;
    //25
}
