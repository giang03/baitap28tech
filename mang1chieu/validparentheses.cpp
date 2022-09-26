#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

bool check(string s){
    stack <char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else {
            if(st.size() == 0) return 0;
            else if(s[i] == ')' && st.top() != '('){
                return 0;
            }
            else if(s[i] == '}' && st.top() != '{'){
                return 0;
            }
            else if(s[i] == ']' && st.top() != '['){
                return 0;
            }
            else{
                st.pop();
            }
        }
    }
    if(st.size() > 0) return 0;
    return 1;
}

int main() {
	string s; cin >> s;
    if(check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}

