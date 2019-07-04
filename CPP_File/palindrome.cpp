#include<stdio.h>

int main()
{
	char str[20];
	int  i=0,flag=0;
	printf("Enter a string: ");
	gets(str);
	while(str[i] != '\0')
	{
		i++;
	}
	for(int j=0; j<i; j++)
	{
		if(str[j] != str[i-j-1])
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nNot a Palindrome!!");
	}
	else
	{
		printf("\nIs a Palindrome!!");
	}
	return 0;
}
