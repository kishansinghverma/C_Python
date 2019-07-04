#include<stdio.h>


int main()
{
	int i=0, j=0, y=0;
	char str1[50], str2[50], str3[100];
	printf("Enter String1: ");
	gets(str1);
	printf("Enter String2: ");
	gets(str2);

	while(str1[i] != '\0')
	{
		str3[i]=str1[i];
		i++;
	}
	while(str2[j] != '\0')
	{
		str3[i+j]=str2[j];
		j++;
	}
	str3[i+j+1]='\0';
	printf("\nJoined String: ");
	puts(str3);
}
