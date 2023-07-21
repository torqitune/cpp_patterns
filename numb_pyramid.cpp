#include<iostream>
using namespace std;

int main(){
    int i=1,n=20;
    while(i<=n){                        //rows
        int j=1;
        while(j<=n-i){                  //space
            cout<<"  ";
            j++;
        }
        int k=1;
        while (k<=i){                   //middle pyramid
            cout<<k<<" ";
            k++;
        }
        int w=1,p=i-1;                  //'w' is for no. of times we want our loop to run i.e (for n=4, w=0,1,2,3) and 'p' is the no. we want to print , here we are printing p in reverse order.
        while(w<=n-(n-i+1)){
            cout<<p<<" ";
            w++;
            p--;
        }
        cout<<endl;
        i++;
    }

    return 0;
}