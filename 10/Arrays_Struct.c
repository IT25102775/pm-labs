#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float salary;
} employee_t;

void printEmployee(employee_t emp) {
    printf("Name: %s, ID: %d, Salary: %.0f\n", emp.name, emp.id, emp.salary);
}

void printHighestSalary(employee_t employees[], int size) {
    int HightestIndex = 0;
    
    for (int i = 1; i < size; i++) {
        if (employees[i].salary > employees[HightestIndex].salary) {
            HightestIndex = i;
        }
    }
    
    printf("\nHighest Salary: %s, ID: %d, Salary: %.2f\n", employees[HightestIndex].name, 
           employees[HightestIndex].id, employees[HightestIndex].salary);
}

int main() {
    employee_t employees[5];

    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee's Name: ");
        scanf("%s", employees[i].name);
        printf("Employee's ID: ");
        scanf("%d", &employees[i].id);
        printf("Employee's Salary: ");
        scanf("%f", &employees[i].salary);

        printf("\n");

    

    }

    printf("\nEmployee's LIST: \n");
      for (int i = 0; i < 5; i++) {
        printf("Employee %d - ", i + 1);
        printEmployee(employees[i]);
    }

    printHighestSalary(employees, 5);
    
    return 0;
}
