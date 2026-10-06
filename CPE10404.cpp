#include <iostream>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b && a && b) {
        int carry = 0, count = 0;
        while (a != 0 || b != 0) {
            carry += a % 10 + b % 10;
            carry /= 10;
            a /= 10;
            b /= 10;
            if (carry != 0) count++;
        }
        if (count == 0)
            cout << "No carry operation.\n";
        else if (count == 1)
            cout << "1 carry operation.\n";
        else
            cout << count << " carry operations.\n";
    }
    return 0;
}
