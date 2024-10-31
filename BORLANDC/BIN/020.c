#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int id;
    int salary;
};

int read_employees_data(struct employee **list_of_employees);
void print_employee_data(struct employee *list_of_employees, int list_size);

void main(void)
{
    struct employee *list_of_employees;
    int list_size = read_employees_data(&list_of_employees);
    print_employee_data(list_of_employees, list_size);
}

int read_employees_data(struct employee **list_of_employees)
{
    int i;
    int list_size;
    printf("Enter List Size: ");
    scanf(" %d", &list_size);
    
    (*list_of_employees) = (struct employee*)malloc(sizeof(struct employee) * list_size);

    for (i = 0; i < list_size; i++)
    {
        printf("Enter Employee %d's ID: ", i+1);
        scanf(" %d", &(*list_of_employees)[i].id);

        printf("Enter Employee %d's Salary: ", i+1);
        scanf(" %d", &(*list_of_employees)[i].salary);
    }

    return list_size;
}

void print_employee_data(struct employee *list_of_employees, int list_size)
{
    int i;
    for (i = 0; i < list_size; i++)
    {
        printf("Employee %d's ID: %d\n", i+1, (list_of_employees)[i].id);
        printf("Employee %d's Salary: %d\n", i+1, (list_of_employees)[i].salary);
    }

    printf("\n");
    return;
}