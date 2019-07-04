#include <stdio.h>  
 
void counting_sort(int ar[], int k, int n)
{
    int B[n], frq[k+1]={0};
    
    for (int j = 0; j < n; j++)
        frq[ar[j]]++;
    
    for(int i=0; i<=k; i++)
    	printf("%d %d \n",i,frq[i]);
	printf("\n");
    for (int i = 1; i <= k; i++)
        frq[i] = frq[i] + frq[i-1];
    
    for(int i=0; i<=k; i++)
    	printf("%d %d \n",i,frq[i]);
		  
    for (j = n; j >= 0; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    printf("The Sorted array is : ");
    for (i = 1; i <= n; i++)
        printf("%d ", B[i]);*/
}

int main()
{
    int k = 0;
	int A[]={5,8,7,6,5,0,4,9,6,3,2,4,5,1,8,7,3};
    int n=sizeof(A)/sizeof(A[0]);
    for (int i = 0; i <n; i++)
    {
        if (A[i] > k) {
            k = A[i];
        }
    }
    counting_sort(A, k, n);
    printf("\n");
    return 0;
}
