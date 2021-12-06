#include <iostream>

using namespace std;

enum
{
	MERCURY, VENUS, EARTH, MARS, JUPITER, SATURN, URANUS, NEPTUNE
};
int main()
{
	setlocale(LC_ALL, "Russian");
	int Planets = 0;
	Start:
	cout << "Введи номер планеты" << endl;
	cin >> Planets;

	switch (Planets)
	{
	case MERCURY:
		cout << "Меркурий" << endl;
		break;
	case VENUS:
		cout << "Венера" << endl;
		break;
	case EARTH:
		cout << "Земля" << endl;
		break;
	case MARS:
		cout << "Марс" << endl;
		break;
	case JUPITER:
		cout << "Юпитер" << endl;
		break;
	case SATURN:
		cout << "Сатурн" << endl;
		break;
	case URANUS:
		cout << "Уран" << endl;
		break;
	case NEPTUNE:
		cout << "Нептун" << endl;
		break;
	default:
		cout << "Ошибка" << endl;
		break;
	}
	goto Start;
	system("pause");
	return 0;
}