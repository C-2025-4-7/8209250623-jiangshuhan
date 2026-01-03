#include<iostream>
#include <iomanip> 
using namespace std;
void change(bool L[],int n) {
	if (L[n] == true) {
		L[n] = false;
	}
	else {
		L[n] = true;
	}
}
int main() {
	bool L[100] = { true };
	for (int i = 1; i <= 100; i++) {
		L[i] = true;
	}
	for (int s = 2; s <= 100; s++) {
		for (int j=s; j <= 100; j += s) {
			 change( L, j);
		}
	}
	int num = 0;
	cout << "打开柜子的序号数：" << endl;
	for (int c = 1; c <= 100; c++) {
		if (L[c] == true) {
			num++;
			cout << "  " << c;
		}
	}
	cout <<endl<< "一共打开了的柜子数：" << num;
	return 0;
}