//File Handling : fprintf, fscanf
#include<stdio.h>

int main()
{
   FILE *fptr = fopen("sunbeam.txt","w");
    char name[20];
    int marks;

    if(fptr == NULL)
        printf("File was not opened.\n");
    else
    {
        for(int i=1; i<=3; i++)
        {
            printf("Enter the name and marks :");
            scanf("%s%d",&name,&marks);
            fprintf(fptr,"%s  %d\n",name,marks);
        }
        printf("Data entered into the file.\n");
        fclose(fptr);
    }

    printf("\n Reading the data from the file :\n");
    fptr = fopen("sunbeam.txt","r");
    while(fscanf(fptr,"%s%d",&name,&marks) != EOF)
    {
        printf("Name = %s  Marks = %d\n",name,marks);
    }
    fclose(fptr);


    

    return 0;
}