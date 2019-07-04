#include<stdio.h>


int main()
{
	int i=0, j=0;
	char str1[50], str2[50];
	printf("Enter String: ");
	gets(str1);

	while(str1[i] != '\0')
	{
		i++;
	}
	for(int j=0; j<i; j++)
	{
		str2[i-j]=str1[j];
	}
	str2[i+1]='\0';
	printf("\nReversed String :");
	puts(str2);
}
