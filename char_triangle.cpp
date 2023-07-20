#include<iostream>
using namespace std;

int main(){
    int i=1,n=7;
    while(i<=n){            //row
        int j=1;
        char ch=65;
        ch=ch+i-1;
        while(j<=i){        //column
            cout<<ch<<" ";
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }

    return 0;
}