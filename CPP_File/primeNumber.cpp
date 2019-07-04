#include <stdio.h>

int main()
{
	int i,j,cnt;
	for(i=1; i<=100; i++)
	{
		cnt=0;
		for(j=2; j<=i/2; j++)
		{
			if(i%j == 0)
			{
				cnt++;
				break;
			}
		}
		if(cnt == 0 && i != 1)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}
