#include <stdio.h>
#include <conio.h>

struct employee
{
	char name[20];
	long salary;
};

struct employee read_employee_data(void);
void print_employee_data(struct employee employee1);

void main(void)
{
	struct employee dumDum_employee = read_employee_data();
	print_employee_data(dumDum_employee);
}

struct employee read_employee_data(void)
{
	struct employee employee1;

	printf("Enter Employee's Name: ");
	scanf(" %s", &employee1.name);

	printf("Enter Employee's Salary: ");
	scanf(" %d", &employee1.salary);

	return employee1;
}

void print_employee_data(struct employee employee1)
{
	printf("Name: %s\nSalary: %d\n", employee1.name, employee1.salary);
}