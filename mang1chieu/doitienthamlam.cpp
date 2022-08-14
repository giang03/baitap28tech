#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
	ll n; cin >> n;
	ll dem = 0;
	dem += n/1000; n %= 1000;
	dem += n/500; n %= 500;
	dem += n/200; n %= 200;
	dem += n/100; n %= 100;
	dem += n/50; n %= 50;
	dem += n/20; n %= 20;
	dem += n/10; n %= 10;
	dem += n/5; n %= 5;
	dem += n/2; n%= 2;
	dem +=n;
	cout << dem << endl;
    return 0;
}

