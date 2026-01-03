#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num < 2) {
		return false;
	}
	if (num == 2) {
		return true;
	}
	for (int i = 2; i <num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	for (int num = 2; num < 10000&&n<200; num++) {
		if (is_prime(num)==true )
		{
			cout << num << "\t";
			n += 1;
			if (n % 10 == 0) {
				cout << endl;
			}
		}
		
	}
	return 0;
}
