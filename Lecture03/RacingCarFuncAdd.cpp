#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN]; // 소유자ID
	int fuelGauge; // 연료량
	int curSpeed; // 현재속도


	void showCarState(const Car& car)
	{
		cout << "소유자 ID : " << gamerID << endl;
		cout << "연료량 : " << fuelGauge << endl;
		cout << "현재속도 : " << curSpeed << endl << endl;
	}

	void Accel(Car& car)
	{
		if (fuelGauge <= 0)
		{
			return;
		}
		else
		{
			fuelGauge -= FUEL_STEP;
		}
		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}
		curSpeed += ACC_STEP;
	}

	void Break(Car& car)
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}
		curSpeed -= BRK_STEP;
	}
};

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