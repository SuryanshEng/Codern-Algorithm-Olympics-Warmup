#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;

    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " + ";
        cout << i;
    }

    cout << " = " << sum << '\n';
}