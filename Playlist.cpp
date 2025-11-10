#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<int, int> last_idx;
    int ans = 0;
    for(int j=1, i=1; j<=n; j++){
        int x;
        cin >> x;
        i = max(i, last_idx[x] + 1);
        last_idx[x] = j;
        ans = max(ans, j-i+1);
    }
    cout << ans;
    return 0;
}