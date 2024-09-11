#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any number:");
    scanf("%d",&a);
    for(b=2 ; b<a ; b++)
    {
        c=a%b;
        if(c==0)
        {
            printf ("its not prime number");
            break;
        }
    }    
        if(c!=0)
        {
        printf("its prime nummber");
        }
        else
        { if (a==1)
        {
            printf("its universal number");
        }
        }
        return 0;
    
    
}