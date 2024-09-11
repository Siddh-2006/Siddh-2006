#include<stdio.h>
int main()
{
int a,b=0,c,n,i;
printf("enter a numbers which you want to add:\n");
for (i=1;i<=100;i++)
{
    scanf("%d",&a);
    if(a<0)
    {
        break;
    }
    b+=a;
}
printf("%d",b);
return 0;
}