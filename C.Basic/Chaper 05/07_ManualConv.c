#include <stdio.h>

int main7(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	
	divResult = num1 / num2;  
	printf("나눗셈 결과: %f \n", divResult);
	return 0;
}
// num1과 num2가 정수이기 때문에 몫만 반환이 되는 정수형 나눗셈이 진행됨
// divResult = (double)num1 / num2;   (type)은 type형으로의 형 변환을 의미
// num1이 double형으로 명시적 형 변환 그리고 num1과 num2의 / 연산 과정에서의 산술적 자동 형변환
// 그결과 실수형 나눗셈이 진행되어 divResult에는 0.75가 저장된다.