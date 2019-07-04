#include<stdio.h>


int main()
{
	int i=0, j=0;
	int flag=0;
	char str1[50], str2[50];
	printf("Enter String1: ");
	gets(str1);
	printf("\nEnter String2: ");
	gets(str2);

	while(str1[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	while(str2[i] != '\0')
	{
		if(str1[i] != str2[i])
		{
			flag=1;
			break;
		}
		i++;
	}
	printf("\n");
	if(flag==0)
	{
		printf("Strings are same!!");
	}
	else
	{
		printf("String are not same!!");
	}
}
