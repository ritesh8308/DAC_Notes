 // Jump Statements : goto

 #include<stdio.h>

 int main()
 {

    
    for(int i =1; i<=3; i++)
    {
        for(int j = 1; j<=4; j++)
        {
            printf("%d %d\n",i,j);

            if(i == 2 && j == 3)
                goto END;

        }
    }

    END:
        printf("Exited from the nested loop.\n");
    return 0;
 }