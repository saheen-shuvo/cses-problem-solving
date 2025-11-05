#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    multiset<int> ml;
    for(int i=0; i<n; i++){
        int val;
        cin >> val;
        auto it = ml.upper_bound(val);
        if(it != ml.end()){
            ml.erase(it);
        }
        ml.insert(val);
    }
    cout << ml.size();
    return 0;
}