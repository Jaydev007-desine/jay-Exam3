#include<stdio.h>
int main(){
	int size;
	printf("Enter the size of the array :- ");
	scanf("%d", &size );
	int array[size];
	for (int i = 0; i<size; i++){
		printf("Enter %d element :- ", i);
		scanf("%d", &array[i]);
	}
	int *ptr;
	ptr = array;
	
	
	for (int i =0; i <size; i++){
		*ptr = (*ptr) * (*ptr);
		ptr++;
	}

    printf("squared elements :- ");
	for(int i=0; i<size; i++){
		printf("%d ", array[i]);
	}
}