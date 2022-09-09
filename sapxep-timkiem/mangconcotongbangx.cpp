#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,x; cin >> n >> x;
    int a[n];
    for(int &x : a) cin >> x;
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += a[i];
        if(sum > x){
            
        }
    }
    return 0;
}