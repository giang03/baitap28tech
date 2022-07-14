#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];

void sang(){
	for(long long i = 2; i <= 1000000; i++)
		prime[i] = 1;
	prime[1] = prime[0] = 0;
	for(long long i = 2; i<= sqrt(1000000); i++){
		if(prime[i]){
			for(long long j = i*i; j <= 1000000; j+=i)
				prime[j] = 0;
		}
	}
}

int main() {
	sang();
	long long n;
	cin >> n;
	for(long long i = 2 ; i <= sqrt(n); i++){
		if(prime[i]) cout << i*i <<" ";
	}
    return 0;
}

