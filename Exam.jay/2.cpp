#include<stdio.h>
int main (){
	int arr[100];
	int n;
	int min; 
	
	printf("Enter the number of elements :- ");
	scanf("%d", &n);
	
	for (int i=0; i< n; i++){
		printf("Enter %d number :- ", i);
		scanf("%d", &arr[i]);
	}
	min = arr[0];
	
	for (int i= 1; i<n; i++){
		if (arr[i]<min){
			min= arr [i];
		}
	}
	printf("smallest number is :- %d", min);
}