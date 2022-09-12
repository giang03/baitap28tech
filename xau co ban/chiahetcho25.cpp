#include <bits/stdc++.h>

using namespace std;

bool check(string s){
    int n = s.size() - 1;
    for(int i = n - 1; i <= n; i++){
        if(s[i] != '0') return 0;
    }
    return 1;
}

long long tong(string s){
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    string s; cin >> s;
    if(tong(s) % 3 == 0 && (s[s.size() - 1] - '0') % 5 == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}