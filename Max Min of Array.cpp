#include <iostream>
using namespace std;


getMax(int arr[],int size){

	int max = INT32_MIN;

	for(int i=0;i<size;i++){
		if(max < arr[i])
		max = arr[i];
	}
	return max;}

getMin(int arr[],int size){

	int min = INT32_MAX;

	for(int i=0;i<size;i++){
		if(min > arr[i])
		min = arr[i];
	}
	return min;
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