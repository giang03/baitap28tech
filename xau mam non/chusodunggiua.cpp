#include <bits/stdc++.h>

using namespace std;


int main() {
	string s; cin >> s;
    int n = s.size();
    if(n %2 == 0){
        cout << "NOT FOUND" << endl;
    }
    else{
        cout << s[n/2] << endl;
    }
	return 0;
}