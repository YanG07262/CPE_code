#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N, P, hi;
        cin >> N >> P;

        int days[3651] = {0};
        int total = 0;

        for (int j = 0; j < P; j++) {
            cin >> hi;
            for (int k = hi; k <= N; k += hi) {
                if (k % 7 == 6 || k % 7 == 0)
                    continue;
                if (days[k] == 0) {
                    total++;
                    days[k] = 1;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}
