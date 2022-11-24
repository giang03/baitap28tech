#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k;
int a[101] , x[101];
vector <vector<int>> v;

void inkq(){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(x[i]){
            sum += a[i];
        }
    }
    if(sum == k){
        vector <int> t;
        for(int i = 0; i < n; i++){
            if(x[i]){
                t.push_back(a[i]);
            }
        }
        v.push_back(t);
    }
}

void Try(int i){
    for(int j = 0; j <= 1; j++){
        if(i == n){
            inkq();
            return;
        }
        x[i] = j;
        Try(i+1);
    }
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        x[i] = 0;
        cin >> a[i];
    }
    sort(a,a+n);
    Try(0);
    for(int i = v.size()-1; i >= 0; i--){
        string s = "[";
        for(int j = 0; j < v[i].size(); j++){
            s += to_string(v[i][j]) + " ";
        }
        s.pop_back();
        s += "]";
        cout << s << endl;
    }
    return 0;
}