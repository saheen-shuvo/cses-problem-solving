#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<long long> pre(n);
    pre[0] = v[0];
    for(int i=1; i<n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    while(q--){
        long long l, r;
        cin >> l >> r;
        if(l==1){
            cout << pre[r-1] << '\n';
            continue;
        }
        cout << pre[r-1] - pre[l-2] << '\n';
    }
    return 0;
}