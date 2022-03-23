#include <bits/stdc++.h>
using namespace std;

bool isPossible(long long int woods[],long long int n,long long int m,long long int mid) {
	long long int sumHeight = 0;

	for(long long int i=0;i<n;i++) {
		if(woods[i] > mid) {
			sumHeight += woods[i] - mid;
		}
	}

		if(sumHeight >= m)
		return true;
		else 
		return false;
}

int main() {
	long long int n,m,sum=0;
	cin>>n>>m;

	long long int woods[n];
	for(long long int i=0;i<n;i++) {
		cin>>woods[i];
	}
	for(long long int i=0;i<n;i++) {
		sum += woods[i];
	}

	long long int start = 0,end = sum,ans;
	long long int mid = start + (end-start)/2;

	while(start <= end) {
		mid = start + (end - start)/2;

		if(isPossible(woods,n,m,mid)) {
			ans = mid;
			start = mid + 1;
		}
		else end = mid - 1;
	}
	cout<<ans;
	return 0;
}