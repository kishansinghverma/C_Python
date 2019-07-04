#include<stdio.h>

int a=2;
const char* y="False";
const char* x="True";
int main()
{
	printf("For condition 1: %s\n",(a==2)?x:y);
	printf("For condition 2: %s",(a==1)?x:y);
}
