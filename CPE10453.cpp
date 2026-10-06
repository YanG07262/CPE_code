#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; caseNum++) {
        int a, b;
        cin >> a >> b;
        int sum = 0;

        for (int i = a; i <= b; i++) {
            if (i % 2 != 0) {
                sum += i;
            }
        }
        cout << "Case " << caseNum << ": " << sum << endl;
    }
    return 0;
}
