#include <iostram>
using namespace std;

int main()
{
  float a,b,hasil;
  char arimatika;
  cout << "SELAMAT DATANG DI PROGRAM CALCULATOR\n";
  
  cout << "Masukan nilai pertama: ";
  cin >> a;
  cout << "Masukan operator +,-,/,*: ;
  cin >> arimatika;
  cout << "Masukan nilai kedua: ";
  cin >> b;
  
  cout << "Hasil perhitungan: ";
  cout << a << aritmatika << b << endl;
 
  if (arimatika == '+') {
		hasil = a + b;
	} else if (arimatika == '-') {
		hasil = a - b;
	} else if (arimatika == '/') {
		hasil = a / b;
	} else if (arimatika == '*') {
		hasil = a * b;
	} else {
		cout << " tidak ada nilai";
	}
	cout << "=" << hasil << endl;
	cin.get();
	return 0;
}
}
