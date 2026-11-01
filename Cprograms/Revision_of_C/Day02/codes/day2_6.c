// Jump statements : continue
// used only in loops

#include<stdio.h>

int main()
{
    int start, end;
    printf("Enter the start and end numbers :");
    scanf("%d%d",&start,&end);

    for(int i = start; i<=end; i = i+1) // 20  45
    {
        if(i % 2 == 0)
            continue;

        printf("%d ",i);// 1  3  5  7  9
    }
    return 0;
}