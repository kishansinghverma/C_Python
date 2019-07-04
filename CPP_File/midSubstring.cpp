#include<stdio.h>

int main()
{
	char str1[20],str2[20];
	int p,l,k=0;
	printf("Enter a string: ");
	gets(str1);
	printf("Enter the position: ");
	scanf("%d", &p);
	printf("Enter the length: ");
	scanf("%d", &l);
	for(int i=p; i<p+l; i++)
	{
		str2[k]=str1[i-1];
		k++;	
	}
	str2[k]='\0';
	puts(str2);
	
	return 0;
}
