#include <iostream>
using namespace std;

int g(int i) {
    int a = 0;
    while (i) {
        a += i % 10;
        i /= 10;
    }
    if (a < 10)
        return a;
    else
        return g(a);
}

int main() {
    int n;
    while (cin >> n && n) {
        cout << g(n) << endl;
    }
    return 0;
}
