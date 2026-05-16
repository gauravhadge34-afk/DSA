#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n = 15;

    int space = 0;
    int star = n/2;


    for(int i=1;i<=n/2;i++){
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
        space++;
        star-=2;
    }
    return 0;
}