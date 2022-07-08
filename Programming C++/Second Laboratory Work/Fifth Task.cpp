#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    bool error = false;
    double a, b, step;
    int n;
    double y = 0;
    double sum = 0;
    cout << "Введіть початок інтервалу:" << endl;
    cin >> a;
    cout << "Введіть кінець інтервалу:" << endl;
    cin >> b;
    cout << "Введіть крок інтервалу:" << endl;
    cin >> step;
    cout << "Введіть n інтервалу:" << endl;
    cin >> n;
    if (step <= 0)
    {
        cout << "Відємний крок" << endl;
        return 1;
    }
    if (a > b)
    {
        cout << "Початок інтервалу не може бути більшим аніж кінець" << endl;
        return 0;
    }
    if (n < 1)
    {
        cout << "n повинно бути більше ніж 1" << endl;
        return 0;
    }
    for (double x = a; x <= b; x += step)
    {
        if (x >= 0)
        {
            y = 0;
            for (int i = 1; i <= n - 1; i++)
            {
                y += x - i * i * i;

            }
        }
        if (x < 0)
        {
            y = 1;
            for (int i = 1; i <= n - 1; i++)
            {
                sum = 0;
                for (int j = 1; j <= n; j++)
                {
                    sum += (double)i / (double)(j * j - x);

                }
                y *= sum;
            }

        }
        cout << "x = " << x << " y = " << y << endl;
    }
    system("pause");
    return 0;
