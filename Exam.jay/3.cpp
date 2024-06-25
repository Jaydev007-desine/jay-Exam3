#include<stdio.h>
main(){
	int num;
	int reve;
	printf("enter a 3-digit number :- ");
	scanf("%d", &num );
	reve = (num % 10)*100 + ((num/10 ) %10) *10 + (num / 100);
	printf("reveserd number :- %d", reve );
}