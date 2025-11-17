// CargoCraft Fleet.cpp : Defines the entry point for the application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "CargoCraft Fleet.h"

using namespace std;
void solve(long long n) {
	if (n % 2 == 1 || n < 4) { //not possible if odd or less than 4
		cout << -1 << endl;;
	}
	else {
		long long m = n / 2;
		long long min = m % 2; //if m is even min 6s is 0, if odd min 6s is 1
		long long max = m / 3; //max 6s is first number <= m/3 with same parity as m
		if (max % 2 != min) {
			max--;
		}
		long long x = (m - max) / 2; //min crafts
		long long y = (m - min) / 2; //max crafts
		cout << "Min: " << x<< " Max: "<<y << endl;
	}

	return;
}

int main()
{
	int t = 0;
	while (t < 1 || t > 1000) {
		cout << "Input t between 1-1000" << endl;
		scanf("%d", &t);
	}

	for (int i = 1; i <= t; i++) {
		long long  n = 0;
		cout << "Test case " << i << endl;
		while (n < 1 || n > 1000000000000000000) {
			cout << "Input n between 1-10^18" << endl;
			scanf("%lld", &n);
		}
		solve(n);
	}
	return 0;
}

