#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main(){
    string s; 
    map<string, int> mp;
    int res = 0;
    while(cin >> s){
        mp[s]++;
        res = max(res,mp[s]);
    }
    for(auto it : mp){
        if(it.second == res){
            cout << it.first << endl;
            break;
        }
    }
    return 0;
}