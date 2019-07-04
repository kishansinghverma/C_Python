#include<stdio.h>


int main()
{
	int i=0,n,x=0;
	char str1[50], str2[50];
	printf("Enter String1: ");
	gets(str1);
	printf("\nEnter postion from right: ");
	scanf("%d", &n);

	while(str1[i] != '\0')
	{
		i++;
	}
	while(str1[i-n] != '\0')
	{
		str2[x]=str1[i-n];
		x++;
		n--;
	}
	str2[x+1]='\0';
	printf("\nSubstring from right :");
	puts(str2);
}
