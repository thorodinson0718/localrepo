#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;   // number of workers

    vector<long long> mask(n);

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;  // number of days worker comes

        long long m = 0;
        for (int j = 0; j < k; j++) {
            int day;
            cin >> day;   // 1 to 30
            m |= (1LL << (day - 1));
        }
        mask[i] = m;
    }

    int maxCommon = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            long long common = mask[i] & mask[j];
            int cnt = __builtin_popcountll(common);
            maxCommon = max(maxCommon, cnt);
        }
    }

    cout << maxCommon << endl;
    return 0;
}
