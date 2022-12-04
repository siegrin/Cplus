#include <iostream>
using namespace std;

int main()
{
	float a,b,hasil;
	char aritmatika;

	cout << "Masukan nilai pertama: ";
	cin >> a;
	cout << "Masukan operator +,-,/,*: ";
	cin >> aritmatika;
	cout << "Masukan nilai kedua: ";
	cin >> b;

	cout << "Hasil perhitungan: ";
	cout << a << aritmatika << b << endl;

	switch(aritmatika)
	{
		case '+':
		hasil = a + b;
		cout << hasil << endl;
		case '-':
		hasil = a - b;
		cout << hasil << endl;
		case '/':
		hasil = a / b;
		cout << hasil << endl;
		case '*':
		hasil = a * b;
		cout << "=" << hasil << endl;
	}
	
	cout << "Program Selesei" << endl;

	cin.get();
	return 0;
}
