#include<iostream>
using namespace std;

int main(){
    char arr[] = {'A', 'B', 'C' , 'D' , 'E'};

    int start = 4;

    for(int i=0;i<5;i++){
        for(int j=start;j>=0;j--){
            cout<<arr[j] << " ";
        }
        start--;
        cout<<endl;
    }
    return 0;
}