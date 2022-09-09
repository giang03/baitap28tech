#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i+1] == '/' && isdigit(s[i-1]) == 0){
            cout << '0';
        }
        cout << s[i];
    }
    return 0;
}