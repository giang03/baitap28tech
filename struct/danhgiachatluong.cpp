#include <bits/stdc++.h>

using namespace std;
using ll = long long;

bool cmp(pair <string,int> a, pair<string,int> b){
    if(a.second != b.second)
        return a.second > b.second;
    return a.first < b.first;
}

int main(){
    string s; 
    map<string, int> mp;
    vector <pair<string,int>> v;
    while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            if(!isalpha(s[i])){
                s.erase(i,1);
            }
            s[i] = char(tolower(s[i]));
        }
        if(s == "good" || s == "bad" || s == "wonderful" || s == "terrible"){
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