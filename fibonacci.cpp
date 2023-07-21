#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,n,sum=0;
    cin>>n;
    if(n==1)
        cout<<0;
    else if(n==2)
        cout<<1;
    else{
        cout<<0<<" "<<1<<" ";
        for(int i=1; i<n-1 ; i++){
            sum=a+b;
            cout<<sum<<" ";
            a=b,b=sum;
        }
    }
    return 0;
}