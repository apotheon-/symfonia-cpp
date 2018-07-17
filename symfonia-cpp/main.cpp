#include <iostream>
using namespace std;
int main()
{
	switch (3) //Numer działu
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
	{
		//3.14.XXIX
		cout << "Tabulator \\t\ti po tabulatorze"
			<< "\nTen ciag jest w nowej linii dzieki \\n" << endl
			<< "Ukosnik taki / i taki \\ (dzieki \\\\)" << endl
			<< "A teraz alarm! \\a\a" << endl;

		//3.14.XXX
		cout << "2f(16) to " << 0x2f << endl;

		//3.14.XXXI
		cout << "10(8) to " << 010 << endl;

		//3.14.XXXII
		wchar_t tmp = 'm';
		cout << "cout m typu wchar_t to " << tmp << " Za pomoca L'm': " << L'm' << endl;
		wcout << "wcout m typu wchar_t to " << tmp << " Za pomoca L'm': " << L'm' << endl;

		//3.14.XXXIII
		cout << "Imie\nNazwisko" << endl;
		
		break;
	}
	case 4:
		break;
	default:
		cout << "Nie ma takiego zadania" << endl;
		break;
	}
	system("PAUSE");
}