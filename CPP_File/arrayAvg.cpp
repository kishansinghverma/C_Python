#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	int a[]={10,12,15,13,17,18};
	for(i=0; i<6; i++)
	{
		sum=a[i]+sum;
	}
	float avg=sum/6.0;
	printf("Sum: %d\n",sum);
	printf("Average: %f",avg);
	return(0);
}
