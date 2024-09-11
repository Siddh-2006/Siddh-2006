#include<stdio.h>
int main(){
// variables for storing marks of subjects
int physics,chemistry,maths,english;
//intake of marks in different subjects
printf("enter marks of physics : ");
scanf("%d",&physics);
printf("enter marks of chemistry : ");
scanf("%d",&chemistry);
printf("enter marks of maths : ");
scanf("%d",&maths);
printf("enter marks of english : ");
scanf("%d",&english);
//variable for cutoff mark
int cf;
//given formula for cutoff mark 
cf=(physics+maths+chemistry)/2+english;
//print results
printf("your cutoff mark is : %d",cf);
return 0;
}