#include<iostream>
using namespace std;

 //функция для решения задачи 1
void task1()
{
	int number;
	cout << "please, enter your number" << endl;
	cin >> number;
	if (number < 0)
		cout << "Wrong number" << endl;
	else if (number>=0)
	for (int sum = 0; sum <= number; sum++) {
		for (int str = 0; str <= sum; str++) {
			cout << str << "";
		}
		cout << endl;
	}
	

}
//функция для решения задачи 2
void task2()

{
	int j ;
double r = 1;

do {
	cout<< "Enter number j: " <<endl;
	cin >>j;

	if (j >= 100) {
		cout <<"j must be less than 100";
	}
	else if (j < 0) {
		cout <<"j must be positive";
	}

} while (j >= 100 || j < 0);

cout <<"1 ";
for (int i = 1; i <= j; i++) {
	r = r * (j - (i - 1)) / i;
	cout <<r << " ";
}

cout << endl;


}

//функция для решения задачи 3
void task3()
{
	double sum=0;
	int str=0;
	double num=0;
	cout << "please enter your number" << endl;
	cout << "123-end of input character" << endl;
	cin >> num;
	while (num != 123)
	{
		sum += num;
		str++;
		cin >> num;
	}
	cout << "Arithmetic mean of the entered numbers: " << sum / str << endl;

	
}



int main()
{
    setlocale(LC_ALL, "Russian");
	int choice = 0;
	while (true)
	{
		cout << "what action do you want to do?\n" << endl;
		cout << "1.task 1\n" << endl;
		cout << "2.task 2\n" << endl;
		cout << "3.task 3\n" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				task1();
				break;
			}
			case 2:
			{
				task2();
				break;

			}
			case 3:
			{
				task3();
				break;
			}
			case 4:
			{
				return 0;
				break;
			}
			default:
				cout << "You entered wrong task\n" << endl;
			

		}
	}
	return 0;
}