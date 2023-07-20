#include<iostream>
using namespace std;

int main(){
    int row=4,i=1;
    while(i<=row){              //loop for row
    int j=1;
        while(j<=row){          //loop for column, note: here row and column are equal
            cout<<"*"<<" "; 
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}  