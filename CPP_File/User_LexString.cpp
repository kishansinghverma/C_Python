#include<iostream>

using namespace std;

int len(char str[]){
    int i=0;
    while(str[i] != '\0')
        i++;
    return i;
}

int main(){

    int n;
    scanf("%d", &n);

    char s[n][100];
    char p[n][26];

    for(int i=0; i<n; i++){
        scanf("%s", &s[i]);
        scanf("%s", &p[i]);
    }

    for(int i=0; i<n; i++){
        int x=len(s[i]);
        int y=len(p[i]);

        for(int j=0; j<x; j++){
            for (int k = 0; k<y ; k++) {
                if (s[i][j] == p[i][k]) {
                    cout << s[i][j];
                }
            }
        }
        cout << "\n";
    }
}
