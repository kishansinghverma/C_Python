#include<stdio.h>


int main()
{
	int i=0,n;
	char str1[50], str2[50];
	printf("Enter String1: ");
	gets(str1);
	printf("\nEnter postion from left: ");
	scanf("%d", &n);

	while(str1[i] != '\0')
	{
		if(i==n)
		{
			break;
		}
		str2[i]=str1[i];
		i++;
	}
	str2[i+1]='\0';
	printf("\nSubstring from left :");
	puts(str2);
}
