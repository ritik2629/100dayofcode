#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the no. ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<" "<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
}

pattern:-
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1
 5 4 3 2 1