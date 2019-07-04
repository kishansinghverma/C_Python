#include<stdio.h>

int main()
{
	
	char str[]="Gur dhvpx oebja sbk whzcf bire 13 ynml qbtf.";
	printf("%s", str);
	
	printf("\n");
	
	for(int i=0; i<30; i++)
		printf("%d ", str[i]);
	
	printf("\n");
		
	for(int i=0; i<30; i++)
	{
		if(str[i]!=32)
		{
			if(str[i]>90)
				str[i] = (str[i]+13-97)%26 +97;
		
			else
				str[i] = (str[i]+13-65)%26 +65;
		}
		
	}

	printf("\n");
	
	for(int i=0; i<30; i++)
		printf("%d ", str[i]);
	
	printf("\n");
	
	printf("%s", str);
	
}
