#include <iostream>
#include <algorithm>
using namespace std;

int getcl(int n) {
    int l = 1;
    while (n != 1) {
        if (n % 2)
            n = 3 * n + 1;
        else
            n /= 2;
        l++;
    }
    return l;
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        int oi = i, oj = j;
        if (i > j) swap(i, j);

        int maxl = 0;
        for (int k = i; k <= j; k++) {
            maxl = max(maxl, getcl(k));
        }
        cout << oi << " " << oj << " " << maxl << endl;
    }
    return 0;
}
