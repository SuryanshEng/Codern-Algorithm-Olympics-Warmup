#include <bits/stdc++.h>
using namespace std;

static string makePattern(int L) {
    string s;
    if (L % 3 == 1) s += 'B';
    int k = L / 3;
    for (int i = 0; i < k; i++) s += "AAB";
    if (L % 3 == 2) s += "AA";
    return s;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    string out;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string rp = makePattern(n);
        string cp = makePattern(m);

        string rowA(m, ' '), rowB(m, ' ');
        for (int j = 0; j < m; j++) {
            if (cp[j] == 'A') { rowA[j] = '2'; rowB[j] = '1'; }
            else              { rowA[j] = '1'; rowB[j] = '0'; }
        }

        out += "Yes\n";
        for (int i = 0; i < n; i++) {
            out += (rp[i] == 'A') ? rowA : rowB;
            out += '\n';
        }
    }
    cout << out;
    return 0;
}