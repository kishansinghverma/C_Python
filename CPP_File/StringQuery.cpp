#include<iostream>
#include <string.h>

using namespace std;

int main(){
    int len;
    cin >> len;

    char str[len];
    cin >> str;

    int n;
    cin >> n;

    int pos[n];
    for(int i=0; i<n; i++)
        cin >> pos[i];

    int counter[26]={0};
    int lcount[len];

    memset(lcount, 0, sizeof(lcount));

    for(int i=0; i<len; i++){
        lcount[i]=counter[str[i]-97];
        counter[str[i]-97]++;
    }

    for (int i=0; i<n; i++){
        cout << lcount[pos[i]-1] << "\n";
    }

}
