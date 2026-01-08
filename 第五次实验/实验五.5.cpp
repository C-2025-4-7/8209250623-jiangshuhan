#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x1=60,int y1=80):x(x1),y(y1){}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "(" << x << "," << y << ")"<<endl;
	}
};
int main() {
	Point p = Point(60, 80);
	p.setPoint(2, 4);
	p.display();
	return 0;
}