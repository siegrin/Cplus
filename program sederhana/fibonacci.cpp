#include <iostream>
using namespace std;

int main() {
	int n;
	int f_n;
	int f_n1;
	int f_n2;
	cout << "Program Deret Fibonacci\n";
	cout << "Masukan nilai ke-n : ";
	cin >> n;

	f_n1 = 1;
	f_n2 = 0;
	f_n << f_n1 + f_n2;
	cout << f_n << " ";
	for (int i = 0; i < n; i++)
	{
		f_n = f_n1 + f_n2;
		f_n2 = f_n1;
		f_n1 = f_n;
		cout << f_n2 << " ";
		/* code */
	}
	cout << "\n";


	cin.get();
	return 0;
}
