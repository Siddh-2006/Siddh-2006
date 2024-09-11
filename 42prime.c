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
            printf ("its composite");
            break;
        }
    }    
        if(c!=0 && a!=1)
        {
        printf("its prime number");
        }
        else
        { if (a==1)
        {
            printf("its universal number");
        }
        }
        return 0;
    
    
}
