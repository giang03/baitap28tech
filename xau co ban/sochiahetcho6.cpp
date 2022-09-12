#include <bits/stdc++.h>

using namespace std;

long long tong(string s){
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    string s; cin >> s;
    if(tong(s) % 3 == 0 && s[s.size() - 1] % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}