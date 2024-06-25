#include<stdio.h>
int main(){
	int num;
	
	printf("Enter a number :- ");
	scanf("%d", &num);
	switch (num > 0){
		case 1 :
			printf("%d is a positive number. ", num);
			break;
		case 0 :
			switch (num){
				case 0:
					printf("%d is zero.", num );
					break;
			};
		default :
			if (num == 0){
				break;
			}
				printf ("%d is a negative number.", num );
				break;
	}
}