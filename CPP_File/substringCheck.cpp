#include<stdio.h>
#include<string.h>


int main()
{
	int i=0, j=0;
	int flag=0;
	char str1[50], str2[50];
	printf("Enter String: ");
	gets(str1);
	printf("\nEnter SubString: ");
	gets(str2);

	while(str1[i] != '\0')
	{
		if(str1[i] == str2[0])
		{
			break;	
		}
		i++;
	}
	while(j<strlen(str2))
	{
		if(str1[i] != str2[j])
		{
			flag=1;
			break;
		}
		j++;
		i++;
	}
	if(flag==0)
	{
		printf("SubString is part of string!!");
	}
	else
	{
		printf("SubString is not part of string!!");
	}
}
