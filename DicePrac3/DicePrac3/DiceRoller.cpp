#include <iostream>
#include <ctime>

using namespace std;

class Dice
{
public:
	Dice();
	~Dice();
	int getNum();
	void print();
	float average(Dice, int);
	float average(int[], int);


private:

};

Dice::Dice()
{
		srand(time(NULL));
}

Dice::~Dice()
{

	srand(time(NULL));
}

float Dice::average(Dice roll, int num)
{

}

int Dice::getNum()
{
		return (rand() % 6) + 1; //Random number generator in range [1-6]
}

void Dice::print()
{
	int num;
	num = getNum();
	cout << num << endl;

}

int main()
{
	Dice X;
	X.print();
	return 0;

}