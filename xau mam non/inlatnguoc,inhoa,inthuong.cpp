#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    for(int i = s.size()- 1; i >= 0; i--){
        cout << s[i];
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++){
        cout << (char)tolower(s[i]);
    }
    cout << endl;
    for(int i = 0; i < s.size(); i++){
        cout << (char)toupper(s[i]);
    }
    cout << endl;
	return 0;
}