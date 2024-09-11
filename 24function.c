#include<stdio.h>
#include<math.h>
int main(){
int x,n,y;
printf ("enter the value of n:");
scanf("%d",&n);
printf("enter the value of X:");
scanf("%d",&x);
if (n==1)
{
    y=1+x;

}
else if(n==2)
{
    y=1+(x/n);
}
else if (n==3)
{
    y=1+(x*x*x);
}
else 
{
    y=1+(n*x);
}
printf("your answer is :%d",y);
return 0;
}