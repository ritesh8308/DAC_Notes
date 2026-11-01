// structure : user defined datatype
// collection of similar or dissimilar data elements logically related to one another

#include<stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};




int main()
{
    struct student s1; // variable declaration
    struct student s2 = {102,"Vishakha",90.5};
    printf("Enter the roll_no :");
    scanf("%d",&s1.roll_no);

    printf("Enter the name :");
    scanf("%s",&s1.name);

    printf("Enter the marks :");
    scanf("%f",&s1.marks);

    printf("student s1 : %d  %s  %.2f\n",s1.roll_no,s1.name,s1.marks);
    printf("student s2 : %d  %s  %.2f\n",s2.roll_no,s2.name,s2.marks);
}

