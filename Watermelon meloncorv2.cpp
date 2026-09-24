#include <iostream>
using namespace std;

int main() {
    int h, k;
    cin >> h >> k;

    if (k % 2 == 1) {
        cout << "NO" << endl;
    } else if (k == 0 && h % 2 == 1) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }

    return 0;
}