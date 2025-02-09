#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a=="A")
    {
        printf("Excellent",a);
    }
    else if (a=="B")
    {
        printf("Good",a);
    }
    else if (a=="C")
    {
        printf("Average",a);
    }
    else if (a=="D")
    {
        printf("Below",a);
    }
    else if (a="E")
    {
        printf("Average",a);
    }
    else if (a=="F")
    {
        printf("Fail",a);
    }
    else
    {
        printf("Invalid grade",a);
    }
}