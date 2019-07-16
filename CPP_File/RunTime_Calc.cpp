#include <time.h>
#include <iostream>
using namespace std;

int sum=0;
void func(){
    for (int i = 0; i < 1000000 ; ++i) {
        sum += i;
    }
}

int main(){
    clock_t t=clock();
    func();
    t=clock()-t;

    double tt=((double)t)/CLOCKS_PER_SEC;
    cout <<"Time took by function is: "<< tt;
};