#include <stdio.h>

struct employee
{
  int code;
  int salary;
  char name[20];
};

void main(void)
{
	struct employee employees[5];

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter Employee %d's Name: ", i+1);
		scanf(" %s", &employees[i].name);

		printf("Enter Employee %d's Code: ", i+1);
		scanf(" %d", &employees[i].code);

		printf("Enter Employee %d's Salary: ", i+1);
		scanf(" %d", &employees[i].salary);
	}

	for (i = 0; i < 5; i++)
	{
		printf("Employee %d:\n\tName: %s\nCode: %d\nSalary: %d\n", i+1, employees[i].name, employees[i].code, employees[i].salary);
	}

}