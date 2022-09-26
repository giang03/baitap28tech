#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int k; cin >> k;
    int n = s.size();
    if(s == "0"){
        cout << "YES";
    }
    else {
        int ok = 1;
        for(int i = 0; i < k; i++){
            if(s[n - i - 1] != '0'){
                ok = 0;
                cout << "NO";
                break;
            }
        }
        if(ok) cout << "YES";
    }
    return 0;
}
