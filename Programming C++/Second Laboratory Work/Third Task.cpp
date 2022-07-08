#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int main(int argc, char* argv[]) {

    double x;
    int n;
    double y = 1;
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть х:" << endl;
    cin >> x;
    cout << "Введіть n:" << endl;
    cin >> n;
    for (int i = 1; i <= 2 * n; i++)
    {
        if (i % 2 == 0)
        {
            y *= x - i;
        }
        else
        {
            y *= x + i;
        }
    }
    cout << y << endl;
    system("pause");
    return 0;
}
