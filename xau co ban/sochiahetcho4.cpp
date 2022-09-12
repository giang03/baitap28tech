#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int n = s.size() - 1;
    string tmp;
    for(int i = n - 1; i <= n; i++){
        tmp += s[i];
    }
    int res = stoi(tmp);
    if(res % 4 == 0) return 1;
    return 0;
}

int main(){
    string s; cin >> s;
    if(s.size() > 1){
        if(check(s)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else {
        if(stoi(s) % 4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}