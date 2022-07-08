#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ukrainian");
	double x;
       int y;
	cout << "Введіть х:" << endl;
	cin >> x;
	if (x<0)
	{
		y = -1;
		cout << "y=" << y << endl;
	}
	if (x==0)
	{
		y = 0;
		cout << "y=" << y << endl;
	}
	if (x>0)
	{
		y = 1;
		cout << "y=" << y << endl;
	}
	system("pause");
	return 1;
}
