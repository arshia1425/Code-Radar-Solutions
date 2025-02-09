#include <stdio.h>
int main()
{
    int a;
    scanf("%c",&a);
    if(a>='A' && a<='Z')
    {
        printf("Uppercase",a);
    }
    else if(a>='a' && a<='z')
    {
        printf("Lowercase",a);
    }
    else{
        printf("Not an alphabet",a);
    }
}