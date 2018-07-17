#include <iostream>
using namespace std;
namespace symfonia
{
	int main()
	{
		switch (1) //Numer działu
		{
		case 1:
			//1.3.XIII
			cout << "w i t a m y" << endl
				<< "na" << endl
				<< "p" << endl
				<< "o" << endl
				<< "kladzie" << endl;

			//1.3.XIV
			cout << "Podaj dlugosc w calach: ";
			double dlugoscCale;
			cin >> dlugoscCale;
			cout << dlugoscCale << " to " << dlugoscCale * 2.54 << " cm" << endl;

			break;
		case 2:
			break;
		case 3:
			break;
		default:
			cout << "Nie ma takiego zadania" << endl;
			break;
		}
		system("PAUSE");
	}
}