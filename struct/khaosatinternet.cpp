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
    while(getline(cin,s)){
        stringstream ss(s);
        string tmp;
        vector <string> t;
        while(ss >> tmp){
            t.push_back(tmp);
        }
        mp[t[2]]++;
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