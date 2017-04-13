#include <iostream>

namespace my31
{
	void SimpleFunc(void);
}

namespace my31
{
	void PrettyFunc(void);
}

namespace my32
{
	void SimpleFunc(void);
}

int main0303(void)
{
	my31::SimpleFunc();

	return 0;
}

void my31::SimpleFunc(void)
{
	std::cout << "my31이 정의한 함수" << std::endl;
	PrettyFunc();          //동일 이름공간
	my32::SimpleFunc();  //다른 이름공간
}

void my31::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void my32::SimpleFunc(void)
{
	std::cout << "my32가 정의한 함수" << std::endl;
}