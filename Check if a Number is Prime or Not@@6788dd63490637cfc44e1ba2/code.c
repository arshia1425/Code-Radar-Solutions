#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a==2)
    {
        printf("Prime",a);
    }
    else if(a%2!=0 && a>1)
    {
        printf("Prime",a);
    }
    else
    {
        printf("Not Prime",a);
    }
}