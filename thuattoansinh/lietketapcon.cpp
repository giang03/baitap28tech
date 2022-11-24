#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n, a[100];
bool ok;

void khoitao(){
    cin >> n ;
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
    a[n] = 1;
}

void sinh(){
    int i = n;
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else {
        a[i] = 1;
    }
}

int main(){
    khoitao();
    vector <string> res;
    ok =1;
    while(ok){
        string s = "";
        for(int i = 1; i <= n; i++){
            if(a[i]){
                s += to_string(i) + " ";
            }
        }
        res.push_back(s);
        sinh();
    }
    sort(res.begin(),res.end());
    for(string x : res){
        cout  << x << endl;
    }
    return 0;
}