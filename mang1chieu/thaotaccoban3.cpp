#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	queue <int> q;
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "PUSHBACK"){
            int x; cin >> x;
            q.push(x);
        }
        else if(s == "PUSHFRONT"){
            int x; cin >> x;
            queue <int> tmp;
            tmp.push(x);
            while(q.size() != 0){
                tmp.push(q.front());
                q.pop();
            }
            q = tmp;
        }
        else if(s == "PRINTFRONT"){
            if(!q.empty())
                cout << q.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT"){
            if(!q.empty())
                q.pop();
        }
        else if(s == "PRINTBACK"){
            if(!q.empty())
                cout << q.back() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POPBACK"){
            if(!q.empty()){
                queue <int> tmp;
                while(q.size() != 1){
                    tmp.push(q.front());
                    q.pop();
                }
                q = tmp;
            }
        }
    }
    return 0;
}

