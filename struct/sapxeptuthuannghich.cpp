#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool tn(string s){
    string t; 
    t = s;
    reverse(s.begin(),s.end());
    if(s ==t ) return 1;
    return 0;
}

bool cmp(pair <string,int> a, pair<string,int> b){
    if(a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}

int main(){
    string s; 
    map<string, int> mp;
    vector <pair<string,int>> v;
    int res = 0;
    while(cin >> s){
        if(tn(s)){
            mp[s]++;
        }
    }
    for(auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto it : v){
        cout << it.first << ' ' << it.second << endl;
    }
    return 0;
}