#include <stdio.h>

void bubbleSort(int arr[], int size){
	int s= size-1;
	for (int j=0; j<s; j++){
		for(int i=0; i<size-2; i++){
			if(arr[i]>arr[i+1]){
			int temp= arr[i];
			 arr[i]=arr[i+1];
			 arr[i+1]=temp;
		    }	
		}
		size--;
	}	
	
}

int main (){
	int n;
	scanf("%d", &n);
	int arr[n];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr, n);
	for(int i=0; i<n; i++){
		printf("%d", arr[i]);
	}
	
}
