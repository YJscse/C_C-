extern int num;    //int형 변수 num이 다른파일에 존재함을 컴파일러에게 알리는 문장

void Increment(void)
{
	num++;
}

int GetNum(void)
{
	return num;
}