#include <iostream>

using namespace std;

// Call-by-reference
void SwapByRef(int &ref1, int &ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef(val1, val2);              

	cout << "val1: " << val1 << endl; //20출력
	cout << "val2: " << val2 << endl; //10출력

	return 0;
}

/*

C++에서는 함수 외부에 선언된 변수의 접근방법 두 가지

- 주소 값을 이용한 Call-by-reference

- 참조자를 이용한 Call-by-reference

*/

