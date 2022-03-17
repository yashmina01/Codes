#include <bits/stdc++.h>
using namespace std;

int sqaureRoot(int n) {

    int start=0,end=n,ans=0;
    int mid = start + (end-start)/2;

    while(start<=end) {
        mid=start+(end-start)/2;

        if(mid*mid == n)
        return mid;

        if(mid*mid > n) {
            end=mid-1;
        }
        else if(mid*mid < n) {
            ans=mid;
            start=mid+1;
        }
    } 
    return ans;
}

double morePrecision(int n,int precision,int tempsol) {
    double factor=1;
    double ans = tempsol;

    for(double i=0;i<precision;i++) {
        factor = factor/10;
        for(double j=ans; j*j<n;j=j+factor) {
            ans=j;
        }
    }
    return ans;
}

int main() {
    int n;
    cout<<"Enter number to find it's square root "<<endl;
    cin>>n;

    int tempsol = sqaureRoot(n);

    cout<<morePrecision(n,3,tempsol)<<endl;         //morePrecision(value jiska square root lena,precision(itni decimal tk lena,interger wala part)
}