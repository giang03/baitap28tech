#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    for(int i = 0; i < s.size();i++){
        if(isalpha(s[i])){
            s[i] = ' ';
        }
    }
    stringstream ss(s);
    string tmp;
    long long sum = 0;
    while(ss >> tmp){
        sum += stoll(tmp);
    }
    cout << sum << endl;
    return 0;
}