#include<stdio.h>


int main()
{
	int i=0;
	char str1[50], str2[50];
	printf("Enter String1: ");
	gets(str1);

	while(str1[i] != '\0')
	{
		str2[i]=str1[i];
		i++;
	}
	str2[i+1]='\0';
	printf("\nCopied String2 :");
	puts(str2);
}
