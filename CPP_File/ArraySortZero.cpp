#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(arr[x]==0)
        {
            for(int j=x; j<n-1; j++)
                arr[j]=arr[j+1];
                
              arr[n-1]=0;
              x--;
        }
        x++;
    }
        for(int i=0; i<n; i++)
        {
        	printf("%d ",arr[i]);
		}
    return 0;
}
