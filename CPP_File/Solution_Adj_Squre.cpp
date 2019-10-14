// Created by Kishan Verma on 10-10-2019 23:25.

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long n, m;
    long result=0;

    scanf("%d", &n);
    m=n;
    int len=0;
    while(n>0){
        n=n/10;
        len++;
    }
    int* arr=(int*)malloc(sizeof(int)*len);

    int i=len-1;
    while(m>0){
        arr[i--]=m%10;
        m=m/10;
    }
    for(int i=0; i<len; i++){
        result += pow(arr[i], arr[(i+1)%len]);
    }

    printf("%d", result);
    return 0;
}