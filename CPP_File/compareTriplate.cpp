#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cnt;
compareTriplets(int a[], int b[]) 
{
	int store[2]={0};
	for(int i=0; i<cnt; i++)
	{
		if(a[i]>b[i])
		{
			store[0] += 1;
		}
		else if(b[i]>a[i])
		{
			store[1] += 1;
		}
		else
		{
		}
	}
	printf("%d %d",store[0],store[1]);

}
int main()
{
	char str[100],str2[100];
	char splitStrings[10][10], splitStrings2[10][10];
	int i,j,k,l;
	int ar1[20],ar2[20];
	printf("");
	gets(str);
	gets(str2);	
	j=0; cnt=0;
	for(i=0;i<=(strlen(str));i++)
	{
		if(str[i]==' '||str[i]=='\0')
		{
			splitStrings[cnt][j]='\0';
			cnt++;
			j=0;
		}
		else
		{
			splitStrings[cnt][j]=str[i];
			j++;
		}
	}
	for(i=0; i<cnt; i++)
	{
		ar1[i]=atoi(splitStrings[i]);
	}
	printf("\n");
	l=0; k=0;
	for(i=0;i<=(strlen(str2));i++)
	{
		if(str2[i]==' '||str2[i]=='\0')
		{
			splitStrings2[k][l]='\0';
			k++;
			l=0;
		}
		else
		{
			splitStrings2[k][l]=str2[i];
			l++;
		}
	}
	for(i=0; i<k; i++)
	{
		ar2[i]=atoi(splitStrings2[i]);
	}
	compareTriplets(ar1,ar2);
	return 0;
}

