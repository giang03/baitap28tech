#include <bits/stdc++.h>

using namespace std;

int tongcs(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] -'0';
    }
    return sum;
}

int tcs(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/= 10;
    }
    while(sum > 9){
        sum = tcs(sum);
    }
    return sum;
}

int main(){
    string s; cin >> s;
    if(tongcs(s) == 9 || tcs(tongcs(s)) == 9){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}