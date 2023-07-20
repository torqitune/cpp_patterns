#include<iostream>
using namespace std;

int main(){
    int i=1,n=5;
    while(i<=n){            //row
        char ch=65;         //char for A.
        int j=1;
        ch=ch+n-i;          //reverse character.
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