#include<stdio.h>
#include <iostream>

using namespace std;

int itr=0;
int search(int arr[], int x, int y, int n){

    itr++;
    int mid=(x+y)/2;

    if(arr[mid]==n)
        return mid;

    if((y-x)==1)
        return -1;

    if(n<arr[mid])
        return search(arr, x, mid, n);
    else
        return search(arr, mid, y, n);



}
int main(){
	int arr[]={2, 3, 5, 6, 8, 10, 24, 25, 26, 27, 29, 30, 31, 32, 33, 34, 36};
	int n = sizeof(arr) / sizeof(arr[0]);
	int pos=search(arr, 0, n, 29);
	if(pos==-1)
	    printf("Element Not Found!!");
    else
	    printf("%d %d", pos+1, itr);
	return 0;
}
