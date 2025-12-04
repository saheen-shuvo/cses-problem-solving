#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    ordered_set s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    long long idx = 0;
    while (!s.empty())
    {
        idx = (idx + k) % s.size();
        auto it = s.find_by_order(idx);
        cout << *it << " ";
        s.erase(it);
    }
}
