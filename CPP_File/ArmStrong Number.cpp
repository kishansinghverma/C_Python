#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0,temp,dgt=0;
    
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        n=n/10;
        dgt++;
    }
    n=temp;
    while(n>0)
    {
        sum += pow(n%10,dgt);
        n=n/10;
    }
    if(temp==sum)
        printf("Armstrong Number.");
    else
        printf("Not Armstrong.");
    return 0;
}

