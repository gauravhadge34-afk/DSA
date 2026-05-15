#include<iostream>
#include<cmath>
using namespace std;


int main(){
    int n = 50;

    int star = 1;
    int flag = 1;

    for(int i=1;i<=n/2;i++){
        
        for(int j=1;j<=star;j++){
            cout<<flag << " ";
            if(flag) flag = 0;
            else flag = 1;
        }
        cout<<endl;
        star+=2;
    }

    for(int i=1;i<=n/2+1;i++){
        
        for(int j=1;j<=star;j++){
            cout<<flag<<" ";
            if(flag) flag = 0;
            else flag = 1;
        }
        cout<<endl;
        star-=2;
    }

    
    return 0;
}