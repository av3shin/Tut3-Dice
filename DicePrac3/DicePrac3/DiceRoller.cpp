#include <iostream>
#include <ctime>

class Dice
{
public:
	Dice();
	~Dice();
	int getNum();

private:

};

Dice::Dice()
{
}

Dice::~Dice()
{
}

int Dice::getNum()
{
		return (rand() % 6) + 1; //Random number generator in range [1-6]
}


int main()
{

}