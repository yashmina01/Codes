#include <iostream>
using namespace std;

int printArray(int arr[],int size){
	
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

int reverse(int arr[],int size){

	int start = 0;
	int end = size-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	
}
int main()
{
	int arr[] = {1,2,3,4,5};
	int brr[] = {2,4,6,5,7,9,5,6};

	reverse(arr,5);
	reverse(brr,8);

	printArray(arr,5);
	printArray(brr,8);

}