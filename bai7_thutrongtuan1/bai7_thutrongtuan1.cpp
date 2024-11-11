#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int thu;
	cout << "nhap ngay: "; cin >> thu;
	if (thu == 0) { cout << "khong\n"; }
	else if (thu == 2) { cout << "hai\n"; }
	else if (thu == 3) { cout << "ba\n"; }
	else if (thu == 4) { cout << "tu\n"; }
	else if (thu == 5) { cout << "nam\n"; }
	else if (thu == 6) { cout << "sau\n"; }
	else if (thu == 7) { cout << "bay\n"; }
	else if (thu == 8) { cout << "chunhat\n"; }
	return 0;
}