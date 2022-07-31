#include <bits/stdc++.h>

using namespace std;

bool snt(long long n){
    if(n<2) return 0;
    for(int i = 2; i*i <= n; i++ ){
        if(n%i==0){
           return 0;
        }
    }
    return 1;
}

int sum(long long n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}

bool check(long long n){
    long long a = n;
    int  tong = 0;
    int i = 2;
    while(i <= n/i){
        if(n%i == 0){
            if(n>9)    tong += sum(i);
            else tong += i;
            n/=i;
        }
        else i++;
    }
    if(n!=1) tong += sum(n);
    if(tong == sum(a)) return 1;
    else return 0;
}

int main() {
    long long n;
    cin >> n;
    if(snt(n)) cout << "NO" << endl;
    else if(check(n)) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

