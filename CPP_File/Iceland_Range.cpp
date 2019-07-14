#include <iostream>
#include <cmath>
#include <memory.h>

using namespace std;
int getDistance(int p, int q, int r, int s){
    int result=abs(p-r)+abs(q-s);
    return result;
}
int getmin(int a, int b, int c, int d){
    int result=a;
    if(result < a)
        result = a;
    if(result < b)
        result = b;
    if(result < c)
        result = c;
    if(result < d)
        result = d;

    return result;
}

int getMax(int arr[], int n){
    int result=0;
    for(int i=0; i<n; i++){
        if(arr[i]>result)
            result=arr[i];
    }
    return result;
}

int main(){
    int n;
    cin >> n;

    int cd[n][4];

    for(int i=0; i<n; i++){
        for(int j=0; j<4; j++){
            cin >> cd[i][j];
        }
    }

    int x, y;
    cin >> x;
    cin >> y;

    int score[n];

    for(int i=0; i<n; i++){
        int a=getDistance(cd[i][0], cd[i][1], x, y);
        int b=getDistance(cd[i][2], cd[i][3], x, y);
        int c=getDistance(cd[i][0], cd[i][3], x, y);
        int d=getDistance(cd[i][2], cd[i][1], x, y);

        score[i]=getmin(a,b,c,d);
    }

    int m=getMax(score, n);

    int irr[m+1];
    memset(irr, 0, sizeof(irr));

    for(int i=0; i<n; i++){
        irr[score[i]]=i+1;
    }

    for(int i=0; i<=m; i++)
        if(irr[i] != 0)
            cout << irr[i] << " ";
}