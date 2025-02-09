#include <stdio.h>
int main()
{
    int f;
    scanf("%c",&f);
    if(f=='a' && f=='e' && f=='i' && f=='o' && f=='u' )
	{
		printf("Vowel",f);
	}
    else
    {
        printf("Consonant",f);
    }
}