#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2; getline(cin,s1); getline(cin,s2);
    stringstream ss1(s1);
    string tmp;
    map <string,int> ma;
    while(ss1 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        ma[tmp] = 1;
    }
    stringstream ss2(s2);
    while(ss2 >> tmp){
        for(int i = 0; i < tmp.size(); i++){
            tmp[i] = char(tolower(tmp[i]));
        }
        if(ma[tmp] == 1){
            ma[tmp] = 2;
        }
    }
    for(auto x : ma){
        if(x.second == 2){
            cout << x.first << ' ';
        }
    }
    return 0;
}