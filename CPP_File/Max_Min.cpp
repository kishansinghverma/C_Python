#include<stdio.h>
int main()
{
	int a[]={40,80,65,55,30,20};
	int max=0;
	int min=a[0];
	int i;
	for(i=0; i<6; i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("Maximum: %d", max);
	printf("\n");
	printf("Minimum: %d", min);
	return(0);
}
