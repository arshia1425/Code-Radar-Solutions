#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d",&N);
    for(i=N;i<=N;i++)
    {
        for(j=1;j<=i;j++);
        {
            printf("* ",j);
        }
    printf("\n");
    }
}