#include<iostream>
using namespace std;

int main(){
    int i=1,n=3;

    while(i<=n){                    //row
        int j=1;
        char ch=65;                     //'A' starts from 65 ASCII value
        while(j<=n){                //column
            cout<<ch<<" ";
            j++;
            ch++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}