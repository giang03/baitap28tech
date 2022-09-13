#include <bits/stdc++.h>

using namespace std;

int path[4] = {6,2,4,8};

int main(){
    string s; cin >> s;
    int sum = 0;
    int k = 0;
    for(int i = s.size() - 1; i >= 0; i--){
        if(k == 0){
            sum += s[i] - '0';
        }
        else {
            sum += (s[i] - '0') * path[k%4];
        }
        sum %= 10;
        k++;
    }
    if(sum == 0 || sum == 5){
        cout << "YES\n";
    }
    else cout << "NO\n";
    return 0;
}