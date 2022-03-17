#include <iostream>
using namespace std;


getMax(int arr[],int size){

	int maxi = INT32_MIN;
	maxi = max(maxi,arr[i]);
	/*for(int i=0;i<size;i++){
		if(max < arr[i])
		max = arr[i];
	}*/

	return maxi;
	}

getMin(int arr[],int size){

	int mini = INT32_MAX;
	mini = min(mini,arr[i]);
	/*for(int i=0;i<size;i++){
		if(min > arr[i])
		min = arr[i];
	}*/
	return mini;
	}

int main()
{
	int size;
	cin>>size;

	int num[100];
	for(int i=0;i<size;i++){
		cin>>num[i];
	}
	cout<<"The Maxiumum Element Of Array is "<<getMax(num,10)<<endl;
	cout<<"The Minimum Element of Array is "<<getMin(num,10)<<endl;
}