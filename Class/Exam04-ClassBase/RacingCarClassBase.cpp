#include <iostream>

using namespace std;

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
	char gamerID[ID_LEN];   //소유자 ID
	int fuelGauge;          //연료량
	int curSpeed;           //현재속도

public:
	void InitMembers(char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();

};

void Car::InitMembers(char * ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}

void Car::Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge = fuelGauge - FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed = curSpeed + ACC_STEP;
	}

void Car::Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed = curSpeed - BRK_STEP;
	}

int main(void)
{
	cout << "Exam04 :" << endl;

	Car run99;
	run99.InitMembers( "run99", 100 );
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();


	return 0;
}
