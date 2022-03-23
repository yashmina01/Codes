#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,7,6,8,2,1,3,10};
    int n = arr.size();

    for(int i=0;i<n-1;i++) {
        int minindex = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[minindex] ){
                minindex = j;
            }
        } 
        swap(arr[minindex] , arr[i]);
    } 

    for(int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}