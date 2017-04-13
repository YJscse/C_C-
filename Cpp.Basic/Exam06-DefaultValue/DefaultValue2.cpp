#include <iostream>

int Adder2(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int Adder2(void)
{
	int num1 = 7;
	return num1;
}

int Adder2(int num1 = 1)
{
	return num1;
}

int main02(void)
{
	std::cout << Adder2() << std::endl;
	std::cout << Adder2(5) << std::endl;
	std::cout << Adder2(3, 5) << std::endl;

	return 0;
}



/*

Adder2 함수를 호출할 때 인자를 넣지 않으면

8라인의 함수를 호출하는 것인지, 디폴트 값이 적용되는 14라인의 함수를

호출하는 것인지 구분이 모호해진다.

*/

