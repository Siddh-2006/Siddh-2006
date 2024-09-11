//selecting division by marks
#include<stdio.h>
int main(){
    //variable for intake marks
int a,b,c,d,e;
printf("ENTER MARKS OF FIVE SUBJECTS");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
//condition acc. to marks
if((a+b+c+d+e/500)*100>=80)//A division for 80% marks
{
printf("FIRST DIVISION");}
else if((a+b+c+d+e/500)*100>=60)//B Division for 60% marks
{
printf("SECOND DIVISION");
} 
else
printf("THIRD DIVISION");//C Division for 60% marks

return 0;
}
