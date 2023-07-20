#include<iostream>
using namespace std;

int main(){
    int i=1,count=0,n=4;
    while(i<=n){        //row
        int j=1;
        count=i;
        while(j<=i){        //column
            cout<<count<<" ";
            j++;
            count++;
        }
        cout<<endl;
        i++;
    }
  
    return 0;
}