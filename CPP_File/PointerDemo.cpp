#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

void sort(int arr[])
{
	for(int i=0; i<16; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[4][4]={{5,4,3,10},{1,13,2,11},{9,8,7,12},{14,16,15,6}};

	sort(&arr[0][0]);
}
