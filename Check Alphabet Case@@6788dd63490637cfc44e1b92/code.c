#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>='A' && a<='Z')
    {
        printf("Uppercase",a);
    }
    else if(a>='a' && a<='z')
    {
        printf("Lowercase",a);
    }
}