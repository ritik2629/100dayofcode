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
            cout<<" "<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}

pattern:-
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5