#include<iostream>
using namespace std;

int main(){
    int i=1,count=1,n=5;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            j++;
            count++;
        }
        i++;
        cout<<endl; 
    }
    

    return 0;
}