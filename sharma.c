#include<stdio.h>
int main()
{
    float celsius,farenhite;
    printf("enter temperature in celsius");
    scanf("%f", &celsius);

    farenhite = (celsius*9.0/5.0)+32;
    printf("%.2f c is equal to %.2f f\n");
    return 0;
}
