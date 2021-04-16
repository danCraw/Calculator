#include <iostream> 
#include <cstring>
int main()
{
	setlocale(LC_ALL, "ru");
	using namespace std;
	double firstInNumber;
	double secindInNumber;
	string operation;
	int checkOperation;
	cout << " Введите 2 числа, над которыми будут совершаться действия\n";
	cin >> firstInNumber;
	if ((cin.fail()) || (firstInNumber > 9223372036854775807) || (firstInNumber < -9223372036854775807)) {
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Введено неверное значение, пожалуйста, повторите попытку\n";
			cin >> firstInNumber;
		}
	}
	cin.clear();
	cin.ignore(32767, '\n');
	cin >> secindInNumber;
	if ((cin.fail()) || (secindInNumber > 9223372036854775807) || (secindInNumber < -9223372036854775807)) {
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Введено неверное значение, пожалуйста, повторите попытку\n";
			cin >> secindInNumber;
		}
	}
	cin.clear();
	cin.ignore(32767, '\n');
	cout << " Введите действие, которое хотели бы совершить('""+""', '""-""', '""*""', '""/""' )\n";
	cin >> operation;
			while ((operation != "+") && (operation != "-") && (operation != "*") && (operation != "/"))
			{
					cout << " Вы ввели не верный символ, пожалуйста, повторите попытку\n";
					cin >> operation;
				}
			if (operation =="+") {
				checkOperation = 1;
			}
			if (operation =="-") {
				checkOperation = 2;
			}
			if (operation == "*") {
				checkOperation = 3;
			}
			if (operation == "/") {
				checkOperation = 4;
			}
switch (checkOperation)
{
case (1):
	cout << firstInNumber << " + " << secindInNumber << " = " <<firstInNumber + secindInNumber;
	break;
case (2):
	cout << firstInNumber << " - " << secindInNumber << " = " << firstInNumber - secindInNumber;
	break;
case (3):
	cout << firstInNumber << " * " << secindInNumber << " = " << firstInNumber * secindInNumber;
	break;
case (4):
	if (secindInNumber == 0) {
		cout << "Делеие на ноль запрещено\n";
		main();
	}
	else
	{
		cout << firstInNumber << " / " << secindInNumber << " = " << firstInNumber / secindInNumber;
		break;
	}
	break;
default:
	break;
}
}
	/*if (operation == "+") {
		cout << firstInNumber + secindInNumber;
	}
	if (operation == "-") {
		cout << firstInNumber << " - " << secindInNumber << " = " << firstInNumber - secindInNumber;
	}
	if (operation == "*") {
		cout << firstInNumber << " * " << secindInNumber << " = " << firstInNumber * secindInNumber;
	}
	if ((operation == "/") && (secindInNumber != 0)) {
		cout << firstInNumber << " / " << secindInNumber << " = " << firstInNumber / secindInNumber;
	}
	if ((operation == "/") && (secindInNumber == 0)) {
		cout << "Делеие на ноль запрещено\n";
		main();
	} */