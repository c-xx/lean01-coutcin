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
int main(void)
{
	
	cout << "hello" << endl;
	

	cout << A::x << endl;
	B::fun();
	fun2(); // �����ռ�ʹ��


	system("pause");
	return 0;
}








