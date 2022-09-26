#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
	    stack <int> st;
        int tmp = i;
        while(tmp){
            st.push(tmp%2);
            tmp/=2;
        }
        while(!st.empty()){
            cout << st.top();
            st.pop();
        }
        cout << ' ';
    }
    return 0;
}

