// File handling : fputs, fgets

#include<stdio.h>

int main()
{
    FILE *fptr = fopen("sun.txt","a");
    char str[100];

    if(fptr == NULL)
        printf("File not opened.\n");
    else 
    {
        printf("Enter the string :");
        gets(str); // predefined function to get the string from the console.

        fputs(str,fptr);
        printf("Data entered into the file.\n");
        fclose(fptr);
    }

   fptr = fopen("sun.txt","r");
    char data[100];
    fgets(data,100,fptr);

    printf("Reading data from the file:\n");
    printf("%s",data);

    fclose(fptr);
    return 0;
}