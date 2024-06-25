#include <stdio.h>
#include <string.h>

typedef struct {
    char name[100];
    char role[100];
} emp;

int main() {
    FILE *fp;
    int n;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);

    emp empl[n]; 
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Failed to open file data.txt.\n");
        return 1; 
    }

   
    for (int i = 0; i < n; i++) {
        printf("Enter the details of employee %d:\n", i + 1);
        printf("Enter the name of employee: ");
        scanf("%s", empl[i].name);
        printf("Enter the role of employee: ");
        scanf("%s", empl[i].role);
    }

 
    for (int j = 0; j < n; j++) {
        fprintf(fp, "Employee %d\n", j + 1);
        fprintf(fp, "Name: %s\n", empl[j].name);
        fprintf(fp, "Role: %s\n", empl[j].role);
        fprintf(fp, "\n"); 
    }

   
    fclose(fp);

    printf("Successfully wrote employee details to data.txt.\n");

    return 0;
}
