#include <bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> woods,int n,int h,int mid) {

    int sumHeight = 0;
    
    for(int i=0;i<n;i++) {

        if(woods[i] > mid) {
            sumHeight += woods[i] - mid;
            if(sumHeight == h)
        {
            return true;
        }
        }
        
    }
    return false;
}

int main() {
    vector<int> woods = {20,15,10,17};
    int n = woods.size();
    int sum=0,h = 7;
    int ans = -1;

    for(int i=0;i<n;i++) {
        sum+=woods[i];
    }

    int start=0,end=sum;
    int mid = start + (end-start)/2;

    while(start <= end) {
        mid = start + (end-start)/2;

        if(isPossible(woods,n,h,mid) ) {
            ans = mid;
            start = mid + 1;
        }
        else end = mid - 1;
    }
    cout<<ans<<endl;

}