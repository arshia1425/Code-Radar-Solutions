#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    for(i=N;i>=1;i++)
    {
        for(j=0;j<=i;j--);
        {
            printf("* ",j);
        }
    printf("\n");
    }
}