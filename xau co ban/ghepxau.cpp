#include <bits/stdc++.h>

using namespace std;

bool cmp(string a, string b){
    string x = a+b;
    string y = b+a;
    return x > y;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    string a[n];
    for(int i =0 ; i< n; i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for(auto x : a) cout << x;
    return 0;
}