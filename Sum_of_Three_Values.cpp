#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long target_sum;
    cin >> target_sum;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        long long val;
        cin >> val;
        v.push_back({val, i + 1});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        long long need = target_sum - v[i].first;
        int l = i + 1, r = n - 1;

        while (l < r)
        {
            long long sum2 = v[l].first + v[r].first;

            if (sum2 == need)
            {
                cout << v[i].second << " " << v[l].second << " " << v[r].second << "\n";
                return 0;
            }
            if (sum2 < need)
                l++;
            else
                r--;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}