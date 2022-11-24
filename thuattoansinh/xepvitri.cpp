#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
string a[1002];
bool ok;

void khoitao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
}

void sinh(){
    int i = n;
    while( i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
        ok = 0;
    }
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i],a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    khoitao();
    ok = 1;
    while(ok){
        for(int j = 1; j <= n; j++){
            cout << a[j] << ' ';
        }
        cout << endl;
        sinh();
    }
    return 0;
}