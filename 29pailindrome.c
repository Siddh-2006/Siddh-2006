#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a number :");
scanf("%d",&a);
b=0;
c=a;
while(c>0)
{
    b=b*10;//increment in power by 10 = b
    b=b+c%10;//b+remainder
    c=c/10;//drcreaseing in power of 10 to get last digit
}
if (b==a)
{
    printf("its an pailindrome");
}
else{
    printf("no its not pailindrome");
}
return 0;
}