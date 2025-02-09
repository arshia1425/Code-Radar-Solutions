#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>='A' && a<='Z')
    {
        printf("Uppercase",a);
    }
    else
    {
        printf("Lowercase",a);
    }
}