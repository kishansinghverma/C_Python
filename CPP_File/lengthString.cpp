#include<stdio.h>


int main()
{
	int i=0;
	char str[50];
	printf("Enter String: ");
	gets(str);
	
	while(str[i] != '\0')
	{
		i++;
	}
	printf("String Length: %d", i);
}
