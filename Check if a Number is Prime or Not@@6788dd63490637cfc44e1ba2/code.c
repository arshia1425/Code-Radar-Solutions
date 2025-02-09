#include <stdio.h>
int main() 
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("Prime",a);
    }
    else if(a%2!=0)
    {
        printf("Not Prime",a);
    }
}