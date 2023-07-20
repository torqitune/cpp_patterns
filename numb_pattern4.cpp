#include<iostream>
using namespace std;

int main(){
    int i=1,n=9;
    int count=1;
    while(i<=n){            //row
        int j=1;
        while(j<=3){        
            cout<<count<<" ";
            count+=1;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}