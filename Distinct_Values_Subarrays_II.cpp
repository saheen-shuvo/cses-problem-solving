#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    map<int, int> fre;
    int count = 0;
    long long ans = 0;
    int a[n+1];
    for(int i=1, j =1; j<=n; j++){
        cin >> a[j];
        fre[a[j]]++;
        if(fre[a[j]] == 1){
            count++;
        }
        while(count > k){
            fre[a[i]]--;
            if(fre[a[i]] == 0){
                count--;
            }
            i++;
        }
        ans = ans + (j-i+1);
    }
    cout << ans;
    return 0;
}