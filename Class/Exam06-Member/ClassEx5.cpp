//Ŭ���� �����ڸ� �̿��� �ʱ�ȭ
// ���� ���� ����, �� ���� ����� ���� ��� �Լ� ȣ���

#include <iostream>

using namespace std;

class OrangeBox
{
private:
	int total;

public:
	OrangeBox()
	{
		cout << "������Ʈ ������ 51" << endl;
		total = 0;
	}
	OrangeBox(int n)
	{
		cout << "������Ʈ ������ 52" << endl;
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
