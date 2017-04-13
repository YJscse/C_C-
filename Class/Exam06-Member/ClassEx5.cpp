//클래스 생성자를 이용한 초기화
// 정적 동적 생성, 각 생성 방법에 따른 멤버 함수 호출법

#include <iostream>

using namespace std;

class OrangeBox
{
private:
	int total;

public:
	OrangeBox()
	{
		cout << "오브젝트 생성됨 51" << endl;
		total = 0;
	}
	OrangeBox(int n)
	{
		cout << "오브젝트 생성됨 52" << endl;
		total = n;
	}
	void GetTotal()
	{
		cout << "total : " << total << std::endl;
	}
};

int main()
{
	OrangeBox obox1;
	obox1.GetTotal();

	OrangeBox obox2(10);
	obox2.GetTotal();

	OrangeBox * obox3 = new OrangeBox;
	obox3->GetTotal();

	OrangeBox * obox4 = new OrangeBox(10);
	obox4->GetTotal();

	return 0;


}

// (*oBox3).GetTotal() == oBox3->GetTotal()
