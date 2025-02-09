#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if (a<=1)
    {
        printf("Not Prime",a);
    }
    else if(a==2)
    {
        printf("Prime",a);
    }
    else if(a%2!=0 && a%3!=0)
    {
        printf("Prime",a);
    }
    else
    {
        printf("Not Prime",a);
    }
}