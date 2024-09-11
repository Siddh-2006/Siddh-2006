//no. is odd or even
#include<stdio.h>
int main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
if (a%2==0)
{
    printf("%d is even",a);//if divisible ny 2 the print this..
}
else
{
       printf("%d is odd",a);//if not then print this
}


return 0;
}