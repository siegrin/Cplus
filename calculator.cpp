#include <iostream>
using namespace std;

int main()
{
  float a,b,hasil;
  char aritmatika;
  cout << "SELAMAT DATANG DI PROGRAM CALCULATOR\n";
  
  cout << "Masukan nilai pertama: ";
  cin >> a;
  cout << "Masukan operator +,-,/,*: ";
  cin >> aritmatika;
  cout << "Masukan nilai kedua: ";
  cin >> b;
  
  cout << "Hasil perhitungan: ";
  cout << a << aritmatika << b << endl;
 
  if (aritmatika == '+') {
		hasil = a + b;
	} else if (aritmatika == '-') {
		hasil = a - b;
	} else if (aritmatika == '/') {
		hasil = a / b;
	} else if (aritmatika == '*') {
		hasil = a * b;
	} else {
		cout << " tidak ada nilai";
	}
	cout << "=" << hasil << endl;
	cin.get();
	return 0;
}
