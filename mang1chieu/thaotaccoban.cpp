#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	queue <int> q;
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n == 1){
            cout << q.size() << endl;
        }
        else if(n == 2){
            if(q.empty()){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        else if(n == 3){
            int x; cin >> x;
            q.push(x);
        }
        else if(n == 4){
            if(!q.empty())
                q.pop();
        }
        else if(n == 5){
            if(!q.empty())
                cout << q.front() << endl;
            else cout << -1 << endl;
        }
        else if(n == 6){
            if(!q.empty())
                cout << q.back() << endl;
            else cout << -1 << endl;
        }
    }
    return 0;
}

