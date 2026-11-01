// array of structure  and structure pointer variable

#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float salary;
};

int main()
{
    
    struct employee emp[3];

    printf("Enter the employee info :");

    for(int i =0; i<3; i++)
    {
        printf("Enter the emp_id :");
        scanf("%d",&emp[i].emp_id);
        printf("Enter the name : ");
        scanf("%s",&emp[i].name);
        printf("Enter the salary :");
        scanf("%f",&emp[i].salary);
    }

    printf("Employee Info :\n");

    for(int i =0; i<3; i++)
    {
        printf("%d  %s  %.2f\n",emp[i].emp_id,emp[i].name,emp[i].salary);
    }

    struct employee e1 = {501,"Sonam",5000}; 
    struct employee *ptr = &e1;

    printf("emp data using e1 : %d  %s  %.2f\n",e1.emp_id,e1.name,e1.salary);
    printf("emp data using ptr : %d  %s  %.2f\n",ptr->emp_id,ptr->name,ptr->salary);

    return 0;
}