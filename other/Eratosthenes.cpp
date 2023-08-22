#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void sieveOfEratosthenes(int n) {
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p<=sqrt(n); p++) {
        if (prime[p] == true) {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for (int p=2; p<=n; p++) {
        if (prime[p])
            cout << p << " ";
    }
}

int main() {
    int n = 1000;
    cout << "Prime numbers from 2 to " << n << " : " << endl;
    sieveOfEratosthenes(n);
    cout << endl;
    return 0;
}
