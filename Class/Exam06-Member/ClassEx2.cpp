// 멤버함수의 정의(구현) : 안쪽에해도 되고, 바깥쪽에 해도 상관없다.

#include <iostream>

using namespace std;

class OrangeBox2
{
private:
	int total;
public:
	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal()
	{
		return total;
	}
};

void OrangeBox2::Add(int num)
{
	total = total + num;
}

int main2()
{
	return 0;
}