#include<iostream>
using namespace std;
class box
{
private:
	int length;
	int width;
	int height;
public:
	void inputbox() {
		cout << "输入长方形的长宽高：" << endl;
		cin >> length >> width >> height;
	}
	void Vbox() {
		int V = length * width * height;
		cout << "长方形的体积为" << V<<endl;
	}
};
int main() {
	box b1;
	box b2;
	box b3;
	b1.inputbox();
	b1.Vbox();
	b2.inputbox();
	b2.Vbox();
	b3.inputbox();
	b3.Vbox();
}