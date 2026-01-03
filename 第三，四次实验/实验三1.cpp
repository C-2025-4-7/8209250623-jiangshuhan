#include<iostream>
using namespace std;
int sum(int &a ,int &b)
{
	int n = a + b;
	for (int i = n; i > 0; i--) {
		if (a % i == 0) {
			if (b % i == 0) {
				return i;
			}
		}
	}
	
}
int wam(int& a, int &b)
{
	for (int i = 1; i <= a * b; i++) {
		if (i % a == 0) {
			if (i % b == 0) {
				return i;
			}
		}
	}
}
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "自然数m和n的最大公约数为" << sum(m, n) << endl;
	cout << "自然数m和n的最大公约数为" << wam(m, n) << endl;
}