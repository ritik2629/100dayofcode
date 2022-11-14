#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no.";
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch =64+count;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}

pattern:
A B C 
D E F 
G H I 
