#ifndef __CAR_H__
#define __CAR_H__

#define ID_LEN       20
#define MAX_SPD      200
#define FUEL_STEP    2
#define ACC_STEP     10
#define BRK_STEP     10

class Car
{

	// public : 어디서든 접근 가능
	// pritected : 상속관계에 놓여있을때, 파생 클래스에서의 접근 허용
	// private : 클래스 내에서만 접근 허용 (default)
private:
	char gamerID[20];   //소유자 ID
	int fuelGauge;          //연료량
	int curSpeed;           //현재속도

public:
	void InitMembers(char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};

#endif