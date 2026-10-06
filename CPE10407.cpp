#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int i, j;
    while (cin >> i >> j) {
        long long int t = 0;
        t = abs(i - j);
        cout << t << endl;
    }
    return 0;
}
