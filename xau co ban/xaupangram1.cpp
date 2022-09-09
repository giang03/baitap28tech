#include <bits/stdc++.h>

using namespace std;


int main(){
    string s; cin >> s;
    set <char> se;
    for(int i = 0; i < s.size(); i++){
        s[i] = char(tolower(s[i]));
        se.insert(s[i]);
    }
    if(se.size() == 26) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}