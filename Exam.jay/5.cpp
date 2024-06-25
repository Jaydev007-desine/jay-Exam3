#include<stdio.h>
typedef struct {
	int room;
	int year;
	char city[50];
}house;
int main (){
	int n;
	printf("Enter the number of houses :- ");
	scanf("%d", &n);
	house houses[n];
	
	for (int i=0; i<n  ;i++){
		printf("Enter details for house %d\n", i+1);
		printf("Room quantity :- ");
		scanf("%d", &houses [i].room);
		printf("Established year :- ");
		scanf("%d", &houses[i].year);
		printf("city in which house is situated : -");
		scanf("%s", &houses[i].city);
	}
	printf("House Deatil\n");
	for (int i =0; i<n; i++){
		printf("House %d :\n", i+1);
		printf("Room quantity : %d \n", houses[i].room);
		printf("Year in which house is build :- %d \n", houses[i].year);
		printf("city in which house is situated :- %s\n", houses[i].city );
	}
}