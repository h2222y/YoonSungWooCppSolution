#include <iostream>
using namespace std;


namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN]; // 소유자ID
	int fuelGauge; // 연료량
	int curSpeed; // 현재속도
	void showCarState(const Car& car);
	void Accel(Car& car);
	void Break(Car& car);
};

void 
Car::showCarState(const Car& car)
{
	cout << "소유자 ID : " << gamerID << endl;
	cout << "연료량 : " << fuelGauge << endl;
	cout << "현재속도 : " << curSpeed << endl << endl;
}

void 
Car::Accel(Car& car)
{
	if (fuelGauge <= 0)
	{
		return;
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}
	if (curSpeed + CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void 
Car::Break(Car& car)
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}

int main()
{
	Car run99 = { "run99", 100,0 };
	run99.Accel(run99);
	run99.Accel(run99);
	run99.showCarState(run99);
	run99.Break(run99);
	run99.showCarState(run99);

	Car sped77 = { "sped77", 100,0 };
	sped77.Accel(sped77);
	sped77.Break(sped77);
	sped77.showCarState(sped77);
	return 0;
}