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

bool check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] % 2 != 0) return 0;
    }
    return 1;
}

bool cmp(pair <string,int> a, pair<string,int> b){
    return a.second > b.second;
}

int main(){
    string s; 
    map<string, int> mp;
    pair<string,int> pa[10001];
    int i = 0;
    while(cin >> s){
        if(tn(s) && check(s)){
            mp[s]++;
            pa[i].first = s;
            pa[i++].second = 0;
        }
    }
    for(int j = 0; j < i; j++){
        if(mp[pa[j].first] != 0){
            pa[j].second = mp[pa[j].first];
            mp[pa[j].first] = 0;
        }
    }
    stable_sort(pa, pa+i, cmp);
    for(int j = 0; j < i; j++){
        if(pa[j].second != 0){
            cout << pa[j].first << ' ' << pa[j].second << endl;
        }
    }
    return 0;
}