#include<stdio.h>
int main(){
	int row =10;
	for(int i =1; i<= 5; i++){
		for(int j = 1; j<=i; j++){
			int num = (row - i + 1) * (row - i + 1) ;
			printf("%d ", num);
		}
		printf("\n");
	}
}