#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(int argc, char* argv[]) {
    double x;
    int n, k;
    double y = 0;
    setlocale(LC_ALL, "Ukrainian");
    cout << "Введіть х:" << endl;
    cin >> x;
    cout << "Введіть n:" << endl;
    cin >> n;
    cout << "Введіть k:" << endl;
    cin >> k;
    if (n <= 0)
    {
        cout << "Error" << endl;
        return 0;
    }
    if (k > n)
    {
        cout << "Error" << endl;
        return 0;
    }
    for (int i = 1; i <= n; i++)
    {
        if ((x + (2 * i)) == 0)
        {
            cout << "error, ділення на нуль" << endl;
            return 0;
        }
        if (i != k)
        {
            y += i / (x + 2 * i);
        }
    }
    cout << "y=" << y << endl;
    system("pause");
    return 0;
}
