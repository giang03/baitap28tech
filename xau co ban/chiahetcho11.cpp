#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int res = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2== 0){
            res += s[i] - '0';
        }
        else res -= s[i] - '0';
    }
    if(abs(res) % 11 == 0) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}