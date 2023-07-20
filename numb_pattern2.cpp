#include<iostream>
using namespace std;

int main(){
    int i=1,n=4;
    while(i<=n){        //row
        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++; 
    }
    return 0;
}