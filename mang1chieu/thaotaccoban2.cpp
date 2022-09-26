#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	queue <int> q;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "PUSH"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty())
                cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POP"){
            if(!q.empty())
                q.pop();
        }
    }
    return 0;
}

