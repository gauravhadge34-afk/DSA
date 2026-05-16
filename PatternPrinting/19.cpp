#include<iostream>
using namespace std;

int main(){
    int space = 0;

    int stars = 10;

    for(int i=0;i<5;i++){
        for(int j=0;j<stars/2;j++){
            cout<<"* ";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }

        for(int j=0;j<stars/2;j++){
            cout<<"* ";
        }

        stars -= 2;
        space += 2;
        cout<<endl;
    }

    for(int i=0;i<=5;i++){
        for(int j=0;j<stars/2;j++){
            cout<<"* ";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }

        for(int k=0;k<space;k++){
            cout<<" ";
        }

        for(int j=0;j<stars/2;j++){
            cout<<"* ";
        }

        stars += 2;
        space -= 2;
        cout<<endl;
    }

    return 0;
}