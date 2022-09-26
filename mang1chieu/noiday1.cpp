#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    priority_queue <long long, vector<long long>,greater<long long>> q;
    int n; cin >> n;
    long long ans = 0;
    int a[n];
    for(int &x : a) cin >> x;
    for(int x : a) q.push(x);
    while(q.size() > 1){
        long long a = q.top();
        q.pop();
        long long b = q.top();
        q.pop();
        ans += a+b;
        q.push(a+b);
    }
    cout << ans << endl;
    return 0;
}

