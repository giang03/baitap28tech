#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string tmp; cin >> tmp;
    set <char> se;
    map <char,int> ma;
    int cnt_max = 0, cnt_min = INT_MAX;
    for(int i = 0; i < tmp.size(); i++){
        se.insert(tmp[i]);
        ma[tmp[i]]++;
        cnt_max = max(cnt_max,ma[tmp[i]]);
    }
    for(int i = 0; i < tmp.size(); i++){
        cnt_min = min(cnt_min,ma[tmp[i]]);
    }
    for(char i = 'a'; i <= 'z'; i++){
        if(ma[i] == cnt_max){
            cout << i << ' ' << ma[i] << endl;
            break;
        }
    }
    for(char i = 'z'; i >= 'a'; i--){
        if(ma[i] == cnt_min){
            cout << i << ' ' << ma[i] << endl;
            break;
        }
    }
    cout << se.size() << endl;
    return 0;
}