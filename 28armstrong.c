#include<stdio.h>
int main(){
int a,b,c,d;
printf("enter any number:");
scanf("%d",&a);
b=0;
d=a;
while(d>0)
{
    c=d%10;
    b=b+c*c*c;
    d=d/10;

} 
if(b==a)
{
    printf("its a armstrong");
}
else {
    printf("its not armstrong");
}
return 0;
}