#include<stdio.h>
int main(){
int num;
printf("enter an integer:");
scanf("%d",&num);
//check if the number is positive, negative, or zero
if(num>0){
    printf("%d is a positive number.\n",num);
}else if(num<0){
printf("%d is a negative number.\n",num);
}else{//num must be 0
    printf("the number is 0.\n");
}
return 0;
}

