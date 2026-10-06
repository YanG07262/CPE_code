#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin >> s) {
        if (s == "0") break;

        long long sum[2] = {0, 0};
        for (int i = 0; i < (int)s.length(); i++) {
            sum[i % 2] += s[i] - '0';
        }

        if ((sum[0] - sum[1]) % 11 == 0) {
            cout << s << " is a multiple of 11." << endl;
        } else {
            cout << s << " is not a multiple of 11." << endl;
        }
    }
    return 0;
}
