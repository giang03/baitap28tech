#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return n > 1;
}

long long tong(string s){
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(snt(s[i] - '0') == 0) return 0;
        sum += s[i] - '0';
    }
    return sum;
}

int main(){
    string s; cin >> s;
    if(snt(tong(s))) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}