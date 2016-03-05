#include <iostream>
#include <ctime>

using namespace std;

class Dice
{
public:
	Dice(void);
	int roll();
	void print(float);
	void input(int);
	float average(Dice, int);
	float average(int[], int);


private:
	int num;
	int num2;
	int arr[5];
};

Dice::Dice()
{
	srand(time(NULL));	//random number generator.
};


float Dice::average(Dice obj, int num) //Gets the value of each roll from getSum and then sums + averages
{//First use of the average function
	float av;
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		sum = sum + obj.roll();
	}
	av = sum / num; //num argument from user
	return av;
}

float Dice::average(int m [], int n) //Overloaded average function
{//Second use of average function
	float av = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + m[i];
	}
	av = (sum / n) + (sum % n);
	return av;
}

int Dice::roll()
{
	int val = 0;
	val = (rand() % 6) + 1; //Random number generator in range [1-6]
	return val;
}

void Dice::print(float n)
{
	cout << n << endl;
}

void Dice::input(int n)
{
	cout << "Enter the amount of times you want to roll the die: " << endl;
	cin >> n;
}


int main()
{
	Dice X;
	int num = 5;
	int size_arr = 4;
	float sum = 0;
	float av_holder_roll = 0;
	float av_holder_arr;
	int arr[5];

	//X.input(num);

	av_holder_roll = X.average(X,num); //Calculated and returned die roll average
	cout << "Enter the values for your array: " << endl;
	for (int j = 0; j < (size_arr); j++)
	{
		cin >> arr[j];
	}
	
	av_holder_arr = X.average(arr, size_arr); //Calculated and returned array average

	cout << "The number of die rolls is " << num << endl;
	cout << "The average of the rolled values is: " << endl;
	X.print(av_holder_roll);

	cout << "The values in the array are: " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << "" << endl;

	cout << "The average of the values in the array is: " << endl;
	X.print(av_holder_arr);
	return 0;

}