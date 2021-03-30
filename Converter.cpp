#include <iostream>

using namespace std;

int main()
{

	cout << "Converter" << endl;
	cout << "---------" << endl;

conversion:

	cout << "" << endl;
	cout << "Convert Cm to inch (a), Inch to cm (b) ? ";
	char a;
	cin >> a;
	switch (a) {
	case 'a': goto cminch;
		break;
	case 'b': goto inchcm;
		break;
	default: cout << "Error." << endl;
	}

cminch:

	cout << "" << endl;
	cout << "Cm Inch" << endl;
	cout << "This program converts centimeters to inches." << endl;
	double n;
	cout << "How many centimeters ? ";
	cin >> n;
	n = n / 2.54;
	cout << n << " inches." << endl;
	goto question;

inchcm:

	cout << "" << endl;
	cout << "Inch Cm" << endl;
	cout << "This program converts inches to centimeters." << endl;
	double n2;
	cout << "How many inches ? ";
	cin >> n2;
	n2 = n2 * 2.54;
	cout << n2 << " centimeters." << endl;
	goto question;

question:
	cout << "" << endl;
	cout << "New conversion ? (y) / Exit (n) ";
	char q;
	cin >> q;
	if (q == 'y') { goto conversion; }
	else if (q == 'n') { goto end; }
	else { goto question; }

end:
	return 0;
}
