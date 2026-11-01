// Passing structure to a function
#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
};

void accept_data(struct employee e1);
void print_data(struct employee e1);
void accept_data_by_address(struct employee *ptr);

int main()
{
    struct employee e1;
    printf("Pass by Value :\n");
    accept_data(e1);
    print_data(e1);
    printf("\n Pass by Address :\n");
    accept_data_by_address(&e1);
    print_data(e1);
    return 0;
}


void accept_data_by_address(struct employee *ptr)
{
    printf("Enter the employee info :\n");
    printf("Enter the emp id :");
    scanf("%d",&ptr->emp_id);
    printf("Enter the name :");
    scanf("%s",&ptr->name);
    printf("Enter the salary :");
    scanf("%f",&ptr->salary);
}

void accept_data(struct employee e1)
{
    printf("Enter the employee info :\n");
    printf("Enter the emp id :");
    scanf("%d",&e1.emp_id);

    printf("Enter the name :");
    scanf("%s",&e1.name);

    printf("Enter the salary :");
    scanf("%f",&e1.salary);
}

void print_data(struct employee e1)
{
    printf("Employee info :\n");
    printf("Empid = %d  name  = %s  salary = %.2f\n",e1.emp_id,e1.name,e1.salary);
}