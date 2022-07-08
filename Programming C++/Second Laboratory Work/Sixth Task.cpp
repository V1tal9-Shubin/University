#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Ukrainian");
    char i;
    cout << "Введіть символ:" << endl;
    cin >> i;
    cout << "Код символа: " << (int)i << endl;
    system("pause");
    return 1;
}
