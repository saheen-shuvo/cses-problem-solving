#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(i+1);
    }
    auto it = s.begin();
    while(!s.empty()){
        it++;
        if(it == s.end()){
            it = s.begin();
        }
        cout << *it << " ";
        auto next = it;
        next++;
        s.erase(it);
        if(next == s.end()){
            next = s.begin();
        }
        it = next;
    }
    return 0;
}