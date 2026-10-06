#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string table = "1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    char c;
    while (cin.get(c)) {
        c = tolower(c);
        int pos = table.find(c);
        if (pos != string::npos && pos >= 2) {
            cout << table[pos - 2];
        } else {
            cout << c;
        }
    }
    return 0;
}
