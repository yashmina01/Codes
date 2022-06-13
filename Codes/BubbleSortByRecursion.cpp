#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr,int n){

    for(auto x: arr)
    cout<<x<<" ";
    cout<<endl;

    if(n == 0)  
    return ;
    bool swapped = false;

    for(int i=0;i<n;i++){
    if(arr[i] > arr[i+1])
    swap(arr[i],arr[i+1]);
    swapped = true;
}
    bubbleSort(arr,n-1);
}

int main() {
    vector<int> arr = {3,5,4,24,1,0,5};
    int n = 7;

    bubbleSort(arr,n-1);
    return 0;
}