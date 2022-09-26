#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int dem(string s){
    stack <char> st;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(st.size() != 0){
            if(s[i] == ')' && st.top() == '('){
                cnt--;
                st.pop();
            }
            else if(s[i] == '}' && st.top() == '{'){
                cnt--;
                st.pop();
            }
            else if(s[i] == ']' && st.top() == '['){
                cnt--;
                st.pop();
            }
            else{
                st.push(s[i]);
                cnt++;
            }
        }
        else {
            st.push(s[i]);
            cnt++;
        }
    }
    return cnt;
}

int main() {
	string s; cin >> s;
    cout << dem(s) << endl;
    return 0;
}

