#include <bits/stdc++.h>
using namespace std;

bool isPresent (int arr[][3] , int target , int i,int j){

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){

                if(arr[i][j] == target)
                return 1;
            }
        }
    return 0;
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

    int target; 
    cout<<"Enter Element To Find "<<endl;
    cin>>target;

    if(isPresent(arr , target , 3 , 3)){
        cout<<"Element Found "<<endl;
    }
    else {
        cout<<"Not Found"<<endl;
    }
}