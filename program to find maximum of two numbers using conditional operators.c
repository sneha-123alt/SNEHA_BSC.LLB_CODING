#include<stdio.h>
int main()
{
    int num1,num2;
    printf ("enter two numbers:");
    scanf("%d %d",&num1,&num2);
    if (num1 >num2)
    {
        printf("%d is the greatest number.\n",num1);
    }
    else if (num2 >num1)

    {
    printf("%d is the largest number.\n",num2);
    }
    else{
    printf(" both numbers are equal.\n");
    }

    }

