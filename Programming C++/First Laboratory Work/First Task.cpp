#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char* argv[]) {

	setlocale(LC_ALL, "Ukrainian");
	float k;
	const float  s = 25.4;
	cout << "Введіть довжину" << endl;
	cin >> k;
    
	if (k <= 0) {
		cout << "неможлива операція" << endl;
		return 0;
	}

	if (k > 0) {
		float di = k * s;
		cout << "Довжина у міліметрах=" << di << endl;
		system("pause");
		return 0;
	}
}

