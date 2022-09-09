#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    int cnt[256] = {0};
    for(char x : s){
        if(cnt[x] == 1){
            cout << x << endl;
            return 0;
        }
        cnt[x] = 1;
    }
    cout << "NONE" << endl;
	return 0;
}