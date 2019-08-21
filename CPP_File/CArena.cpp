#include <iostream>
#include <cmath>

using namespace std;

long long power(long long x, long long int y, long p)
{
    long long res = 1;

    x = x % p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

int main(){
    long long n;
    cin >> n;
    long long mod=pow(10,9)+9;
    long long num;
    for(long long i=0; i<n; i++){
        cin >> num;

        if(num%2==0){
            cout << power(26, num/2, mod) << "\n";
        }
        else{
            cout << power(26, (num+1)/2, mod) << "\n";
        }
    }
    return 0;
}
