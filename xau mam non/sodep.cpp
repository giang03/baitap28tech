#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    int ok = 1;
    for(int i = 1; i < s.size(); i++){
        int a = s[i-1] - '0';
        int b = s[i] - '0';
        if(abs(a-b) != 1){
            cout << "NO" << endl;
            ok = 0;
            break;
        } 
    }
    if(ok) cout << "YES" << endl;
	return 0;
}