/*
int main10(void)
{
	float num1 = 5.789;        // 경고 메세지 발생
	float num2 = 3.24 + 5.12;  // 경고 메세지 발생

	return 0;                  //실수는 double형 상수로 인식이 되어
}                              //데이터 손실에 대한 경고 메시지 발생
*/
/*
int main10(void)
{
	float num1 = 5.789f;          //접미사를 통해서 상수의 자료형을 변경
	float num2 = 3.24F + 5.12F;   //f나 F나 뭘 써도 상관없다

	return 0;
}
*/

//이름을 지니는 심볼릭상수 : const 상수
/*
int main10(void)
{
	const int MAX = 100;          // MAX는 상수! 따라서 값의 변경 불가
	const double PI = 3.1415;     // PI는 상수! 따라서 값의 변경 불가
}
*/
//상수의 이름은 모두 대문자로 표시하고, 둘 이상의 단어를 연결할 떄에는 
//MY_PAGE와 같이 언더바를 이용해서 두 단어를 구분