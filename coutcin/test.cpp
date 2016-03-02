#include <stdlib.h>
#include <iostream>
using namespace std;

namespace A
{
	int x = 1;
	void fun() {
		cout << "A" << endl;
	}
}

namespace B
{
	int x = 2;
	void fun() {
		cout << "B" << endl;
	}

	void fun2() {
		cout << "2B" << endl;
	}
}

using namespace B;


/************************************************************************/
/* 数组中，获取最大或者最小                                                                     */
/************************************************************************/
int getMaxOrMin(int *arr, int count, bool isMax) {
	int temp = arr[0];

	for (int i = 1; i < count; i++)
	{
		if (isMax)
		{
			if (temp < arr[i])
			{
				temp = arr[i];
			}
		}
		else {
			if (temp > arr[i])
			{
				temp = arr[i];
			}
		}


	}

	return temp;
}


int main(void)
{
	
	cout << "hello" << endl;
	

	cout << A::x << endl;
	B::fun();
	fun2(); // 命名空间使用



	int arr1[4] = { 3, 5, 1, 7 };
	bool isMax = false;
	cin >> isMax;
	cout << getMaxOrMin(arr1, 4, isMax) << endl;

	system("pause");
	return 0;
}








