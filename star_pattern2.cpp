 #include<iostream>
using namespace std;

int main(){
    int i=1,n=5;
    while(i<=n){        //row
        int j=1;
        while(j<=i){    //for column
            cout<<"*"<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}