#include <iostream>

using namespace std;

// Call-by-reference ( Call-by-address)
void SwapByRef2(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main2(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef2(&val1, &val2);                     // val1�� val2�� ����� ���� �ٲ�⸦ �����

	cout << "val1: " << val1 << endl;  //20���
	cout << "val2: " << val2 << endl;  //10���

}

/*

���� C���� ���ϴ� Call-by-reference�� ������ �ǹ̸� ���Ѵ�.

- �ּ� ���� ���޹޾Ƽ�, �Լ� �ܺο� ����� ������ �����ϴ� ������ �Լ�ȣ��

*/

