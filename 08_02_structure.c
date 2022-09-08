#include <stdio.h>

struct employee_data
{
    char name[50];
    char empCode[5];
    char dob[13];
    int salary;
} emp;

void data()
{
    printf("\n\tABC CORPORATION");
    printf("\nName : %s\nEmp Code : %s\nDOB : %s\nSalary : %d\n", emp.name, emp.empCode, emp.dob, emp.salary);
}

void main()
{
    printf("vishal ansari section-N std id- 200111238\n");
    printf("Enter Employee name: ");
    gets(emp.name);
    printf("Enter Employee Code: ");
    gets(emp.empCode);
    printf("Enter Employee DOB: ");
    gets(emp.dob);
    printf("Enter Employee Salary: ");
    scanf("%d", &emp.salary);

    data();
}