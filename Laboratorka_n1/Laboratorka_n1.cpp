#include<iostream>
using namespace std;
//1
int main()
{
	setlocale(LC_ALL, "Rus");
	//1
	cout << "Savelev Mikhail Artemovich," << " 211-353" << endl;
	//2
	int max_int = 0b01111111111111111111111111111111;
	int min_int = 0b10000000000000000000000000000000;
	bool max_bool = true;
	bool min_bool = false;
	long max_long = 0b01111111111111111111111111111111;
	long min_long = -max_int;
	long long max_long_long = 0b0111111111111111111111111111111111111111111111111111111111111111;
	long long min_long_long = 0b1000000000000000000000000000000000000000000000000000000000000000;
	short max_short = 0b0111111111111111;
	short min_short = 0b1000000000000000;
	float max_float = 0b01111111111111111111111111111111;
	float min_float = 0b10000000000000000000000000000000;
	double max_double = 0b0111111111111111111111111111111111111111111111111111111111111111;
	double min_double = 0b1000000000000000000000000000000000000000000000000000000000000000;
	int max_char = 0b0111111;
	int min_char = -max_char - 1;
	cout << "\nMAX_CHAR:" << max_char << "\nMIN_CHAR:" << min_char << "\nsize:" << sizeof(char) << endl;
	cout << "\nMAX_INT:" << max_int << "\nMIN_INT:" << min_int <<"\nsize:"<<sizeof(int)<< endl;
	cout << "\nMAX_BOOL:" << max_bool << "\nMIN_BOOL:" << min_bool<<"\nsize:"<<sizeof(bool) << endl;
	cout << "\nMAX_LONG:" << max_long << "\nMIN_LONG:" << min_long <<"\nsize:"<<sizeof(long)<< endl;
	cout << "\nMAX_LONG_LONG:" << max_long_long << "\nMIN_LONG_LONG:" << min_long_long <<"\nsize:"<<sizeof(long long)<< endl;
	cout << "\nMAX_SHORT:" << max_short << "\nMIN_SHORT:" << min_short <<"\nsize:"<<sizeof(short)<< endl;
	cout << "\nMAX_FLOAT:" << max_float << "\nMIN_FLOAT:" << min_float <<"\nsize:"<<sizeof(float)<<endl;
	cout << "\nMAX_DOUBLE:" << max_double << "\nMIN_DOUBLE:" << min_double <<"\nsize:"<<sizeof(double)<< endl;
	//3
	/*cout << "Введите число" << endl;
	cin >>a;
	cout << "Я не понял как вывести в двоичной" << endl;
	cout << "Ваше число в системе счисления с основанием 16:" << hex << a << endl;
	cout << "bool"<<static_cast<bool>(a) << endl;
	cout << "double" << static_cast<double>(a) << endl;
	cout << "char" << static_cast<char>(a) << endl;*/







	//4
	int a, b;
	cout << "Введите коэффиценты a*x=b:" << endl;
	cin >> a >> b;
	cout << a <<"*"<< "x" << "=" << b << endl;
	cout <<"x" << "=" << b << "/" << a << endl;
	cout << "x" << "=" << b / a << endl;
	cout << "Ответ:" <<(double) b / a << endl;
	//5
	int c, d,sum;
	cout<< "Введите координаты отрезка на прямой:" << endl;
	cin >> c >> d;
	sum = c + d;
	cout << "Середина отрезка наодится в точке с координатой " << (double)sum / 2<<"." << endl;
	return 0;
}

