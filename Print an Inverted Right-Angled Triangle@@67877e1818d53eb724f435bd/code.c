#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N;i>=1;i--)
    {
        for(j=1;j<=1;j++)
        {
            printf("*",i);
            printf("*",j);
            j--;
        }
        printf("\n");
    }
}