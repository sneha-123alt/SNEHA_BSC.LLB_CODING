#include <stdio.h>
void main()
{
    int a,b,result;
    float  div;
    printf("Enter two values :");
    scanf("%d",&a);
    scanf("%d",&b);
    result=a+b;
    printf("sum of%d &%d=%d\n",a,b,result);
    printf("diffrence of %d & %d = %d\n",a,b,a-b);
    printf("factor of %d & %d = %d\n",a,b,a*b);
    div=a/b;
    printf("division of %d &%d=%f\n",a,b,div);
}
