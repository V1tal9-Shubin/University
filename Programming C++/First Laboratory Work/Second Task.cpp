#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	setlocale(LC_ALL, "Ukrainian");
	float a, b, c, d, e, f, g, h;
	cout << "Введіть 8 чисел" << endl;
	cin >> a >> b >> c >> d >> e >> f >> g >> h;
	float s = (a + b + c + d + e + f + g + h) / 8;
	cout << "Середнє значення дорівнює:" << s << endl;
	system("pause");
	return 0;
}

