#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n,k;
int a[100];
bool taken[100] = {false}, ans = false;
int target;

bool Try(int i , int k, int subsetSum){
    if(k == 1){
        return true;
    }
    if(subsetSum == target){
        return Try(0,k-1,0);
    }
    for(int j = i; j < n; j++){
        if(!taken[j]){
            taken[j] = true;
            if(Try(i+1,k,subsetSum + a[j])){
                return true;
            }
            taken[j] = false;
        }
    }
    return false;
}

bool check(){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    if(sum % k != 0 || k > n) return false;
    if(k == 1) return true;
    target = sum/k;
    return Try(0,k,0);
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(check()) cout << "1" << endl;
    else cout << "0" << endl;
    return 0;
}