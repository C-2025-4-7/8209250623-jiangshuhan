#include<iostream>
#include <iomanip> 
using namespace std;
void bubble_sort(double list[],int listSize) {
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
}
int main() 
{
    const int ARRAY_SIZE = 10;  
    double nums[ARRAY_SIZE];    

    cout << "请输入10个双精度数字（可重复，按回车分隔）：" << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << "请输入第" << i + 1 << "个数：";
        cin >> nums[i];
    }

	bubble_sort(nums, ARRAY_SIZE);

 
    cout << "\n排序后的升序数组为：" << endl;
	for (int i = 0; i < ARRAY_SIZE; i++) {

		cout << setw(8) << fixed << setprecision(2) << nums[i];
	}