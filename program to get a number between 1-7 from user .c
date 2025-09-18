#include<stdio.h>
int main ()
{
    int dayNumber;
    printf ("%d",&dayNumber);
    switch (dayNumber){
    case1:
        printf("Monday\n");
        break;
    case2:
        printf ("Tuesday\n");
        break;
    case3:
        printf("Wednesday\n");
        break;
    case4:
        printf ("Thursady\n");
        break;
    case5:
        printf ("Friday\n");
        break;
    case6:
        printf ("Saturday\n");
        break;
    case7:
        printf ("Sunday\n");
        break;
    default:
        printf (" invalid input! please enter a number between 1 and 7.\n");
        break;
    }
    return 0;

}
