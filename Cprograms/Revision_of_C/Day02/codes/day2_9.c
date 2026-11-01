// functions : with parameters, without return type

#include<stdio.h>
void prime_numbers(int start, int end);
int main()
{
    int start,end;
    printf("Enter the start and end range to print the prime numbers :");
    scanf("%d%d",&start,&end); // 15 25
    prime_numbers(start,end);
    return 0;
}

void prime_numbers(int start, int end) // 15 
{
    int is_prime;
    for(int num = start;num <= end; num++)
    {
        if(num > 1)
        {
            is_prime = 1;
            for(int i = 2; i<= num/2 ; i++)
            {
                if(num % i == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if(is_prime == 1)
                printf("%d  ",num);
        }
    }
}