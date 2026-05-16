#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A', 'B', 'C' , 'D' , 'E'};

    int spaces = (sizeof(arr) / sizeof(arr[0])) - 1;

    for(int i=0;i<4;i++){

        for(int s=0;s<spaces;s++){
            cout<<" ";
        }
        int j;
        for(j=0;j<=i;j++){
            cout<<arr[j] << " ";
        }
        j-=2;

        for(int k=j;k>=0;k--){
            cout<<arr[k] << " ";
        }


        cout<<endl;
        spaces--;
    }
    return 0;
}