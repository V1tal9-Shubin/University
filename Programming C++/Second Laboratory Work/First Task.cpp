#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {

	setlocale(LC_ALL, "Ukrainian");
	float a, b, c;
	cout << "Enter a:" << endl;
	cin >> a;
	cout << "Enter b:" << endl;
	cin >> b;
	cout << "Enter c:" << endl;
	cin >> c;
	if (a == 0)

	{
		if (b == 0)
		{
			cout << "Enternity solutions" << endl;
			return 0;
		}
		if (c == 0)
		{
			cout << "x=0" << endl;
			return 0;
		}
		else
		{
			cout << "bx+c=0" << endl;
			float z = -c / b;
			cout << "x=" << z << endl;
			return 0;
		}


	}

	if (a != 0)
	{
		if (c == 0)
		{
			cout << "ax^2+b=0" << endl;
			float s = -1 * b / a;
			if (s < 0)
			{
				cout << "Unbelievable" << endl;
				return 0;

			}
			if (s > 0)
			{
				cout << "x1=" << sqrt(s) << endl;
				cout << "x2=0" << endl;
				return 0;
			}


		}
		if (b == 0)
		{
			cout << "ax^2+c=0" << endl;
			float q = -c / a;
			if (q < 0)
			{
				cout << "unbelievable" << endl;
				return 0;
			}
			if (q > 0)
			{
				cout << "x1=" << sqrt(q) << endl;
				return 0;
			}

		}
		else

		{
			cout << "ax^2+bx+c=0" << endl;
			float d = b * b - (4 * a * c);
			if (d > 0)
			{
				double w = (-1 * b + sqrt(d)) / (2 * a);
				double e = (-1 * b - sqrt(d)) / (2 * a);
				cout << "x1=" << w << endl;
				cout << "x2=" << e << endl;
				return 0;
			}
			if (d < 0)
			{
				cout << "No solutions" << endl;
				return 0;
			}
			else
			{
				float v = -b / (2 * a);
				cout << "x=" << v << endl;
				return 0;
			}
		}


	}

	system("pause");
	return 0;

}

