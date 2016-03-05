#include <iostream>
#include <ctime>

using namespace std;

class Dice
{
public:
	Dice()
	{
		srand(time(NULL));	//seeding of random number generator.
    };
	~Dice() 
	{
		srand(time(NULL));
	};
	int getNum();
	void print();
	float average(Dice, int);
	float average(int[], int);
	int loop(int[20]);


private:
	float sum;
	int arr[20];
};

Dice::Dice()
{
		srand(time(NULL));
		sum = 0;
		arr[20];
}

Dice::~Dice()
{

	srand(time(NULL));
	sum;
}

float Dice::average(Dice roll, int num)
{
	for (int i = 1; i < num; i++)
	{
		sum = sum + roll.loop[i];
	}
	return sum;
}

int Dice::getNum()
{
		return (rand() % 6) + 1; //Random number generator in range [1-6]
}

void Dice::print()
{
	int numb;
	numb = getNum();
	cout << numb << endl;

}

void input(int n)
{
	cout << "Enter the amount of times you want to roll the die: " << endl;
	cin >> n;
	
}

int Dice::loop(int m [20])
{
	for (int i = 0; i < 19; i++)
	{
		cin >> m[Dice::getNum()];
	}
	return m[20];
}

int main()
{
	Dice X;
	int num = 0;
	int num2 = 20;
	input(num);
	int arr [20];
	X.loop(&arr[20]);
	X.average(X, num2);
	X.print();
	return 0;

}