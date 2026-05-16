#include<iostream>
using namespace std;

int main(){
    int n = 40;

    for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            //print all stars
            for(int j=0;j<n;j++){
                cout<<"* ";
            }

            cout<<endl;
        }
        //else print only first and last star
        else{
            cout<<"* ";
            for(int j=0;j<(n-2);j++){
                cout<<"  ";
            }
            cout<<"* ";

            cout<<endl;
        }
    }
    return 0;
}