#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");
    float d;
    
    cout << "Введіть число з плавоючою комою" << endl;
    cin >> d;
    if (d > 0) {
        
        cout << floor(d + 0.5) << endl;
    }
    if (d < 0) {

        cout << ceil(d - 0.5) << endl;
    }
    system("pause");
    return 1;
}
