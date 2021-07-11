#include<iostream>
using namespace std;

//#define dec
//#define hex

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
#ifdef dec
	const int n = 32;
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	int bin[n] = {};
	int i = 0;
	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		decimal /= 2;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		cout << bin[i];
	}
	cout << endl;
#endif // dec
#ifdef hex
	const int n = 8;
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	int hex[n] = {};
	int i = 0;
	while (decimal > 0)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
		i++;
	}
	for (i--; i >= 0; i--)
	{
		switch (hex[i])
		{
		case 10:cout << "A"; break;
		case 11:cout << "B"; break;
		case 12:cout << "C"; break;
		case 13:cout << "D"; break;
		case 14:cout << "E"; break;
		case 15:cout << "F"; break;
		default:cout << hex[i]; break;
		}
	}
	cout << endl;
#endif // hex
}