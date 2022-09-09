#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int cnt[256] = {0};
    int MAX = INT_MIN, MIN = INT_MAX;
    for(int i = 0; i < s.size(); i++){
        cnt[s[i]]++;
    }
    char kitumax,kitumin;
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            MAX = max(MAX,cnt[i]);
            MIN = min(MIN,cnt[i]);
        }
    }
    for(int i = 0; i < 256; i++){
        if(cnt[i] != 0){
            if(cnt[i] == MAX){
                kitumax = char(i);
            }
            if(cnt[i] == MIN){
                kitumin = char(i);
            }
        }
    }
    cout << kitumax << ' ' << MAX << endl;
    cout << kitumin << ' ' << MIN << endl;
    return 0;
}