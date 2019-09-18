#include <iostream>
#include <string.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        int max = 0;
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            if (arr[j] > max)
                max = arr[j];
        }
        cout<<max<<" ";
        int bit[max + 1];
        memset(bit, 0, (max+1)*sizeof(bit[0]));

        long result = 0;
        for (int p = n - 1; p >= 0; p--) {
            for (int q = arr[p]; q <= max; q += (q & -q)) {
                bit[q] += 1;
            }
            for (int q = arr[p - 1]; q != 0; q -= (q & -q)) {
                result += bit[q];
            }
        }
        cout << result << "\n";
    }
}
