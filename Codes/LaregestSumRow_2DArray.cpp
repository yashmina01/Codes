#include <bits/stdc++.h>
using namespace std;

int largestSumRow(int arr[][3] , int i,int j){

        int maxi = INT_MIN;
        int rowIndex = -1;

        for(int i=0;i<3;i++){
            int sum = 0;
            for(int j=0;j<3;j++){

                sum+=arr[i][j];            
            }
            if(sum > maxi){
                maxi = sum;
                rowIndex = i;
            }
        }
    return rowIndex;
}

int main(){
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  

    cout<<"Rows Having Largest Sum is :"<<largestSumRow(arr,3,3)<<endl;
}