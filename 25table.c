#include<stdio.h>
int main(){
int i,table,a;
printf("enter which table you want");
scanf("%d",&a);
for (i=0;i<11;i++)
{
table=a*i;
printf("%d""\n",table);
}
return 0;
}