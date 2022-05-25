#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[][3]){

    for(int rows=0;rows<3;rows++){
        for(int cols=0;cols<3;cols++){
            cout<<arr[rows][cols]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void printWave(int arr[][3]) {

    for(int cols=0;cols<3;cols++){
        
        if(cols % 2 == 0){
            for(int rows=0;rows<3;rows++)
            cout<<arr[rows][cols]<<" ";
        }
        else {
            for(int rows = 2;rows>=0;rows--)
            cout<<arr[rows][cols]<<" ";
        }
    }
}
int main() {
    
    int arr[3][3];

    cout<<"Enter Elements To Print In Wave "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
        cin>>arr[i][j];
        }
    }
    printArray(arr);
    printWave(arr);
    return 0;
}