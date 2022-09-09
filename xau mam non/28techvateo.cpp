#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    int ok = 1;
    for(char x : s){
        if(x != '2' && x != '8' && x != 't' && x != 'e' && x != 'c' && x != 'h'){
            cout << x;
            ok = 0;
        } 
    }
    if(ok) cout << "EMPTY" << endl;
    return 0;
}