#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main() {
    double k;

    double y = 0;
    cout << "Enter epc:" << endl;
    cin >> k;
    for (int i = 2; 1 / i >= k; i *= 2)
    {
        y += (1.0 / i);

    }
    cout << y << endl;
    system("pause");
    return 0;
}
