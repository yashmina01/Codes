#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }

    for(int i=0;i<n;i++){                   //Making Transpose Transpose Of Matrix 
        for(int j=0;j<=i;j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){                  //Swapping --> First Row elements 
        for(int j=0;j<n/2;j++)             //then     --> Second Row elements              
        swap(arr[i][j] , arr[i][n-(j+1)]);  // .......Goes on till n
}

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}