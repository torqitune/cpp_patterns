#include<iostream>
using namespace std;

int main(){
    int i=1,n=5;
    while(i<=n){        //for rows
        int j=1;
        while(j<=n+1-i){        //for 1st number pyramid
            cout<<j<<" ";
            j++;
        }
        int p=1;                //for * printing, logic--> no. of times the loop will run is 2*iteration-2
        while(p<=((2*i)-2)){
            cout<<"*"<<" ";
            p++;
        }
        int k=n+1-i;
        while(k>=1){            //2nd number pyramid
            cout<<k<<" ";
            k--;
        }
        // int p=1;                //for * printing, logic--> no. of times the loop will run is 2*iteration-2
        // while(p<=((2*i)-2)){
        //     cout<<"*"<<" ";
        //     p++;
        // }
        cout<<endl;
        i++;
    }
    

    return 0;
}