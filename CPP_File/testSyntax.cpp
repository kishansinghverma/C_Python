#include <stdio.h>

int main()
{
	int z=1;
	for(int x=1; x<=7; x++)
		for(int y=x; y<=3*x; y++)
		{
			printf("%d DAA\n",z);
			z++;
		}
	
}
