#include<iostream>
using namespace std;

int main(){
    int k = 1;
    int r = 1;

    while(k<=15){
        

        for(int i=0;i<r;i++){
            cout<< k << " ";
            k++;
        }

        r++;
        cout<<endl;
    }
    return 0;
}