// always keep in mind that whenever the string or the array consist of 0's and 1's and needs sum then instead of greedy approach go for subarray approach
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
        }

        int sum = accumulate(a.begin(), a.end(), 0);

        if (sum < s)
        {
            cout << -1 << endl;
            continue;
        }

        int i = 0, currSum = 0, maxLen = -1;

        for (int j = 0; j < n; j++)
        {
            currSum += a[j];

            while (currSum > s)
            {
                currSum -= a[i];
                i++;
            }

            if (currSum == s)
            {
                maxLen = max(maxLen, j - i + 1);
            }
        }

        if (maxLen == -1)
        {
            cout << -1 << endl;
        }

        else
        {
            cout << n - maxLen << endl;
        }
    }
}
