#include<stdio.h>
int main()
{
	int i;
	int sum=0;
	int a[]={33,70,65,55,30,40};
	for(i=0; i<6; i++)
	{
		if(a[i]<33)
		{
			printf("Marks: %d",a[i]);
			printf(", Division: Fail \n");
		}
		else if(a[i]>=33 && a[i]<50)
		{
			printf("Marks: %d",a[i]);
			printf(", Division: Third\n");
		}
		else if(a[i]>=50 && a[i]<60)
		{
			printf("Marks: %d",a[i]);
			printf(", Division: Second\n");
		}
		else if(a[i]>=60)
		{
			printf("Marks: %d",a[i]);
			printf(", Division: First\n");
		}
	}
	return(0);
}
