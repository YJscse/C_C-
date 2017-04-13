//함수의 재정의
#include <iostream>

using namespace std;

class Food5
{
public:
	void print(int n1)
	{
		cout << "Food5: " << n1 << std::endl;
	}
};

class Fruit5 : public Food5
{
public:
	// 함수의 재정의 : 함수명, 인수, 반환형이 동일해야 함
	void print(int n2)
	{
		//Food5::print(n2);  // 이게 호출되면 '기능 추가' 가 된다.
		cout << "Fruti5 : " << n2 + 100 << std::endl;
	}
};

int main5()
{
	Fruit5 myFruit;

	myFruit.print(10);
	myFruit.Food5::print(10);

	return 0;
}