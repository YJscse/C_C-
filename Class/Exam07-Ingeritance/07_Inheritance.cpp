//순수 가상 함수
#include <iostream>

using namespace std;

class Food7
{
public:
	virtual void print(int n) = 0; // 순수 가상 함수
};

class Fruit7 : public Food7
{
public:
	//순수 가상 함수의 재정의(Overriding)
	void print(int n)
	{
		cout << (n + 100) << endl;
	}
};

class Fish7 : public Food7
{
public:
	//순수 가상 함수의 재정의(Overriding)
	void print(int n)
	{
		cout << (n + 200) << endl;
	}
};

int main7()
{
	Fruit7 myFruit;
	myFruit.print(5);

	Fish7 myFish;
	myFish.print(5);

	return 0;
}