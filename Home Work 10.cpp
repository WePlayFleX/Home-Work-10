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
	cout << "����� ����� �������" << endl;
	cin >> Planets;

	switch (Planets)
	{
	case MERCURY:
		cout << "��������" << endl;
		break;
	case VENUS:
		cout << "������" << endl;
		break;
	case EARTH:
		cout << "�����" << endl;
		break;
	case MARS:
		cout << "����" << endl;
		break;
	case JUPITER:
		cout << "������" << endl;
		break;
	case SATURN:
		cout << "������" << endl;
		break;
	case URANUS:
		cout << "����" << endl;
		break;
	case NEPTUNE:
		cout << "������" << endl;
		break;
	default:
		cout << "������" << endl;
		break;
	}
	goto Start;
	system("pause");
	return 0;
}