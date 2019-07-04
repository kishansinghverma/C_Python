#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

        int n, a[n], temp[n], sum=0;
        scanf("%d", &n);
        for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            temp[i]=(0-a[i]);
            sum += temp[i];
        }
        for(int i=0; i<n; i++)
        	printf("%d ", temp[i]);
        printf("\n%d", sum);
    return 0;
}
