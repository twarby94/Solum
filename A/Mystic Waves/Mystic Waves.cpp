// Mystic Waves.cpp : Defines the entry point for the application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "Mystic Waves.h"

using namespace std;

int main()
{
	int t = 0;
	while (t < 1 || t > 100) {
		cout << "Input t between 1-100" << endl;
		scanf("%d", &t);
	}

	for (int i = 1; i <= t; i++) {
		int x = 0, n = 0;
		cout << "Test case "<< i << endl;
		while (x < 1 || x > 10 || n < 1 || n > 10) {
			cout << "Input x and n between 1-10" << endl;
			scanf("%d %d", &x, &n);
		}
		int energy = n % 2 * x;
		cout << "Total energy: "<< energy << endl;
	}
	return 0;
}
