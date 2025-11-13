#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, tar_sum;
    cin >> n >> tar_sum;
    map<long long, long long> sum_fre;
    sum_fre[0] = 1;
    long long sum = 0;
    long long ans = 0;
    for(int i=1; i<=n; i++){
        int x;
        cin >> x;
        sum = sum + x;
        ans = ans + sum_fre[sum - tar_sum];
        sum_fre[sum]++;
    }
    cout << ans << '\n';
    return 0;
}