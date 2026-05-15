#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A', 'B', 'C' , 'D' , 'E'};

    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}