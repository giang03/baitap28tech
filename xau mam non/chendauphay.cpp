#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    multiset <char> se;
    for(char x : s){
        if(x != '0'){
            se.insert(x);
        }
    }
    for(auto x : se){
        cout << x;
    }
    if(se.size() == 0) cout << 0;
    return 0;
}