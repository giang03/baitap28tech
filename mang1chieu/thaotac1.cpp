#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    stack <string> st;
	int t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s == "show"){
            if(st.size() != 0){
                string a[st.size()];
                stack <string> tmp;
                tmp = st;
                for(int i = st.size() - 1; i >= 0; i--){
                    a[i] = tmp.top();
                    tmp.pop();
                }
                for(string x : a) cout << x << ' ';
                cout << endl;
            }
            else 
                cout << "EMPTY" << endl;
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

