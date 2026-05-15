#include<iostream>
using namespace std;

int main(){
    int n = 4;
    int gap = n-1;

    for(int i = 1; i <= n; i++){
        // Left side: ascending
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        
        for (int g = 0; g <gap; g++)
        {
            /* code */
            cout << "   ";
        }
        
        
        
        // Right side: descending
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        
        cout << endl;
        gap-=1;
    }

    return 0;
}