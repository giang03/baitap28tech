#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    stack <string> st;
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "top"){
            if(st.size() != 0){
                cout << st.top() << endl;
            }
            else 
                cout << "NONE" << endl;
        }
        else if(s == "push"){
            string x; cin >> x;
            st.push(x);
        }
        else {
            if(st.size() != 0)
                st.pop();
        }
    }
    return 0;
}

