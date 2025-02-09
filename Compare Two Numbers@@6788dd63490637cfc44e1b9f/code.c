#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("Equal",a);
    }
    if(a>b)
    {
        printf("First",a);
    }
    if(a<b)
    {
        printf("Second",b);
    }
}