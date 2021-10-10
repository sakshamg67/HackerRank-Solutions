#include <stdio.h>

int binarySearch(int arr[], int size, int x){
	int start =0, end = size -1;
	
	
	while(start<=end){
		int mid = (start + end)/2;
		if(x==arr[mid]){
		return mid;
	}
	else if(x<arr[mid]){
		end = mid-1;
	}
	else {
		start = mid+1; 
	}
		
	}
	
	
}


int main(){
	int n, x;
	printf("Enter the number of elements in array : ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the elements of array : ");
	for(int i=0; i<n ; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter the number you want to search : ");
	scanf("%d", &x);
	printf("The index of %d is : %d", x, binarySearch(arr, n, x));
	
}
