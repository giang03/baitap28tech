#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    string chu = "";
    string so = "";
    for(char x : s){
        if(isdigit(x)){
            so += x;
        }
        else chu += x;
    }
    cout << so << endl;
    cout << chu << endl;
    return 0;
}