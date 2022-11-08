#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. :";
    cin>>n;
    int sum=0;
    int i=1;
    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"sum of the no. is: "<<sum<<endl;
    
}