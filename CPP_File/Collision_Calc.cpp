#include <iostream>
#include <cmath>
#include <map>

using namespace std;
int main(){
    long n;
    cin >> n;

    double data[n][3];

    for(long i=0; i<n; i++){
        for(long j=0; j<3; j++){
            cin >> data[i][j];
        }
    }

    double arr[n];

    for(long i=0; i<n; i++)
        arr[i]=pow(pow(data[i][0], 2.0) + pow(data[i][1], 2.0), (1/2.0)) / data[i][2];

    map <double, long> counter;
    for (long k = 0; k < n; ++k) {
        if (counter.find(arr[k]) == counter.end())
            counter[arr[k]] = 1;
        else
            counter[arr[k]]++;
    }
    long sum=0;

    for(auto& x : counter)
        sum += (x.second*(x.second-1))/2;

    cout << sum;
}