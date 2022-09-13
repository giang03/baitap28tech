#include <bits/stdc++.h>

using namespace std;

long long C[100001][3];

void tohop(){
    for(int i = 1; i <= 1e5; i++){
        for(int j = 1; j <= 2; j++){
            if(i == j) C[i][j] = 1;
            else if(j == 1) C[i][j] = i;
            else C[i][j] = C[i-1][j - 1] + C[i-1][j];
        }
    }
}

int main(){
    tohop();
    string s; cin >> s;
    map <char,int> mp;
    for(int i =0 ; i< s.size(); i++){
        mp[s[i]]++;
    }
    long long dem = 0;
    for(auto x : mp){
        dem += x.second;
        if(x.second > 1){
            dem += C[x.second][2];
        }
    }
    cout << dem << endl;
    return 0;
}