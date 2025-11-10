#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    long long x;
    cin >> x;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        v.push_back({val, i+1});
    }
    sort(v.begin(), v.end());
    int l=0, r=n-1;
    while(r > l){
        if(v[l].first + v[r].first == x){
            cout << v[l].second << " " << v[r].second;
            return 0;
        }
        else if(v[l].first + v[r].first < x){
            l++;
        }
        else{
            r--;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}