// using 1 structure into another

#include<stdio.h>
struct date
{
    int dd;
    int mm;
    int yy;
};

struct employee
{
    int emp_id;
    char name[20];
    float salary;
    struct date DOB; // DOB is a variable of struct date
    struct date DOJ; // DOJ is another vairable of struct date.
};

int main()
{
    struct employee e1;
    printf("Enter the emp_id, name and salary :");
    scanf("%d%s%f",&e1.emp_id,&e1.name,&e1.salary);

    printf("Enter the Date of Birth :");
    scanf("%d%d%d",&e1.DOB.dd,&e1.DOB.mm,&e1.DOB.yy);

    printf("Enter the Date of Joining :");
    scanf("%d%d%d",&e1.DOJ.dd,&e1.DOJ.mm,&e1.DOJ.yy);

    printf("Employee Details :\n");
    printf("empid = %d  name = %s  salary = %.2f\n",e1.emp_id,e1.name,e1.salary);

    printf("Date of Birth : %d-%d-%d\n",e1.DOB.dd,e1.DOB.mm,e1.DOB.yy);

    printf("Date of Joining :%d-%d-%d\n",e1.DOJ.dd,e1.DOJ.mm,e1.DOJ.yy);
    return 0;
}