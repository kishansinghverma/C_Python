#include<stdio.h>
void converter(int a);
int n1,n2;
int i=0;
int menu;
int res[30];
int main()
{
	printf("Input Two decimal No.:\n");
	scanf("%d %d",&n1,&n2);
	printf("\nChoose Bitwise Operation:\n");
	printf("1. AND\n2. OR\n3. XOR\n");
	scanf("%d",&menu);
	printf("\nBinary numbers for given data is:\n");
	converter(n1);
	converter(n2);
	if(menu == 1)
	{
		printf("Resulting Value: %d\n", n1&n2);
		converter(n1&n2);
	}
	else if(menu == 2)
	{
		printf("Resulting Value: %d\n", n1|n2);
		converter(n1|n2);
	}
	else if(menu == 3)
	{
		printf("Resulting Value: %d\n", n1^n2);
		converter(n1^n2);
	}
	else
	{
		printf("Invalid Choice!!");
	}
}
	void converter(int a)
	{
		while(a != 0)
		{
			res[i]=a%2;
			a=a/2;
			i++;
		}
		for(int j=i-1; j>=0; j--)
		{
			printf("%d", res[j]);
		}
		i=0;
		printf("\n");	
	}		
