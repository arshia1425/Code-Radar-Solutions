#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%5==0)
    {
        printf("Divisible by Both",a);
    }
    if(a%3==0)
    {
        printf("Divisible  by 3",a);
    }
    if(a%5==0)
    {
        printf("Divisible  by 5",a);
    }
    if(a%3!=0 && a%5!=0)
    {
        printf("Not Divisible",a);
    }
}