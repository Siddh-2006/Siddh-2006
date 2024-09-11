//enetred character is lower case or not
#include<stdio.h>
int main(){
    int x,y,z;
char c;
printf("Enter a character: ");
scanf("%c",&c);

x=(97<=c&&c<=122)?4:5;//condition : if 4 comes it means lower //else 5 it means its not...
if(x==4){
    printf("The character is a lowercase letter %d",x);
}
else{
    printf("The character is not an lowercase letter");
}

return 0;
}