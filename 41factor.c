#include<stdio.h>
int main()
{
int a,b,c,i;
printf("enter a number of which you want factor:");
scanf("%d",&a);
for (i=1;i<=a;i++)
{
    if(a%i==0)
    {
        printf("%d\n",i);
    }
}
return 0;
}