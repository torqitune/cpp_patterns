#include<iostream>
using namespace std;

int main(){
    int i=1,n=6;
    while(i<=n){                    //row
        int j=1;
        while(j<=n-i){              //for space printing
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}