#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch=(i+j-1)+64;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

pattern:
A B C 
B C D 
C D E 