#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive %d",a);
    }
    if(a<0)
    {
        printf("Negative%d",a);
    }
    if(a=0)
    {
        printf("Zero %d",a);
    }
    return 0;
}