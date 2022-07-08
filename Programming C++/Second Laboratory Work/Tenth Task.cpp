#include <iostream>]
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	double x;
       int y;
	cout << "Введіть х:" << endl;
	cin >> x;
	y = x < 0 ? -1 : (x == 0 ? 0 :  1);
	cout << "y=" << y << endl;
	system("pause");
	return 0;
}
