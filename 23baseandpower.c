//calculating value by base and exponent
#include<stdio.h>
int main(){
int a,b,p,i;

i=0;
printf("enter base : ");//taking base
scanf("%d",&a);
printf("enter exponent : ");//taking exponent
scanf("%d",&b);
p=a;
while(i<(b-1)){
p=p*a;
i++;

}
printf("the value is %d ",p);
return 0;
}