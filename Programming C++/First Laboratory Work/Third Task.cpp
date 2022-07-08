#include <iostream>
using namespace std;

long double fact(int k) {

    if (k < 0)
        return 0;
    if (k == 0) 
        return 1; 
    else 
        return k * fact(k - 1);
}

int main() {

    int k;
    setlocale(LC_ALL, "Ukrainian"); 
    cout << "Введіть число для факторіалу: ";
    cin >> k;
    cout << "Факторіал числа дорівнює " << k << " = " << fact(k) << endl << endl;
    return 0;
}

